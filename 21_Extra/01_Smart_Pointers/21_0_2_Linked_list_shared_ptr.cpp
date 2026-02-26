//   This program showcases the use of template class shared_ptr that creates a wrapper around
// an object. The wrapper uses a reference counting.
// The reference counting tracks how many other pointers reference the object, 
// increment by one when a new variable reference the object and decrement by one 
// when a variable ceases to reference the object. 
//   If the reference counting reaches 0, then the object can be safely deleted and 
// the allocated memory returned to the freestore manager.

//   In this program, the linked list is automatically deallocated by the shared_ptr class 
// when the variables go out of scope in the listTest function. This is done automatically
// after the call to listTest exits, as shown by the message output by the Node destructor
// before the program exits

#include <iostream>
#include <memory>

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

int main( )
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
}
