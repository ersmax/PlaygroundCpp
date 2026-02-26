//   In this program, an additional global variable is used to reference
// the second element of the linked list. Now, the shared_ptr class will not
// delete the remainder of the objects in the list upon `listTest` function exits.
// This is due to the fact that nodes are deleted only when there are no references
// left to them, but the second item has the global pointer that reference the second object.
// This is a difference with previous program, because here only the first node is deleted
// when the function listTest exits because it has no reference.
// The remaining two nodes, in particular the second, has an additional reference due to
// the global variable. Upon the exiting of the program, even these nodes go out of scope
// and memory is deallocated and returned to the freestore manager.

#include <iostream>
#include <memory>

class Node;

std::shared_ptr<Node> global_reference;

class Node
{
public:
	Node() : num(0), next(nullptr) {};
	~Node() { std::cout << "Deleting " << num << '\n'; }
	Node(const int numVal, const std::shared_ptr<Node>& nextPtr) : num(numVal), next(nextPtr) {};
	int getNum() const { return num; }
	std::shared_ptr<Node> getNext() { return next; }
	void setNext(const std::shared_ptr<Node>& nextPtr) { next = nextPtr; }
private:
	int num;
	std::shared_ptr<Node> next;
};

void listTest();

int main()
{
	listTest();
	std::cout << "Exiting program\n";
	return 0;
}

void listTest()
{
	std::shared_ptr<Node> root(new Node(10, nullptr));
	std::shared_ptr<Node> next1(new Node(20, nullptr));
	std::shared_ptr<Node> next2;
	//  After a shared_ptr is declared we can set it using the reset function
	next2.reset(new Node(30, nullptr));

	// linking nodes
	(*root).setNext(next1);
	next1->setNext(next2);

	// Output list
	std::shared_ptr<Node> temp;
	temp = root;
	while (temp != nullptr)
	{
		std::cout << temp->getNum();
		if (temp->getNext() != nullptr)
			std::cout << "->";
		else
			std::cout << '\n';
		temp = (*temp).getNext();
	}

	//  Create another reference to the second item of linked list
	// to illustrate the shared_ptr functionality
	global_reference = root->getNext();
}
