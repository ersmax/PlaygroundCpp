/*
What are the differences and the similarities between a call-by-value parameter and
a constant call-by-reference parameter? Declarations that illustrate these follow.
*/

// by value: a new copy is made 
// const by ref: a reference to the same object is made without allowing changes

// Formally:
// Similarities: Each parameter call method protects the caller’s argument from
// change.Differences : If the type is a large structure or class object, a call by value
// makes a copy of the caller’s argument and thus uses more memory than a call by
// constant reference.

void callByValue(int x);
void callByConstReference(const int& x);

int main( )
{
	return 0;
}

