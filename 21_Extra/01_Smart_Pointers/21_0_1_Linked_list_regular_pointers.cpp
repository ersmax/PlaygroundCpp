//    This programs implements a linked list with regular pointers.
// The code link objects via pointers and does not explicitly free the memory
// that is allocated in the listTest function. This means that the program has a
// memory leak when execution returns to the main function.

#include <iostream>

class Node
{
public:
	Node() : num(0), next(nullptr) {};
	~Node() { std::cout << "Deleting " << num << '\n'; }
	Node(const int numVal, Node *nextPtr) : num(numVal), next(nextPtr) {};
	int genNum() const { return num; }
	Node* getNext() const { return next; }
	void setNext(Node* nextPtr) { next = nextPtr; }
private:
	int num;
	Node *next;
};

void listTest();
//   Postcondition: test the linked list

int main( )
{
	listTest();
	std::cout << '\n';
	return 0;
}

void listTest()
{
	// Create linked list with 10 -> 20 -> 30
	Node *root = new Node(10, nullptr);
	root->setNext(new Node(20, nullptr));
	// (*root).setNext(new Node(20, nullptr));
	root->getNext()->setNext(new Node(30, nullptr));
	// (*(*root).getNext()).setNext(new Node(30, nullptr));

	// Output list
	Node *temp;
	temp = root;
	while (temp != nullptr)
	{
		std::cout << (*temp).genNum();
		if ((*temp).getNext() != nullptr)
			std::cout << "->";
		temp = (*temp).getNext();
	}
}
