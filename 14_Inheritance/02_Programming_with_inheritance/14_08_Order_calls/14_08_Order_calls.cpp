/*
Suppose Child is a class derived from the class Parent and that the class
Grandchild is a class derived from the class Child. This question is concerned
with the constructors and destructors for the three classes Parent, Child, and
Grandchild. When a constructor for the class Grandchild is invoked, what
constructors are invoked and in what order? When the destructor for the class
Grandchild is invoked, what destructors are invoked and in what order?
*/

/*
For the constructor:
Grandchild() constructor calls Child() constructor, which calls the Parent() constructor.
Thus, Parent() constructor is invoked first, then Child() constructor is invoked, and 
finally Grandchild() constructor is invoked.

For the destructor:
~Grandchild() is invoked, then ~Child() is invoked, and finally ~Parent() is invoked.
*/

// Formally:
//   The constructors are called in the following order : first Parent, then Child, and
// finally Grandchild.The destructors are called in the reverse order : first Grandchild,
// then Child, and finally Parent.

int main( )
{
	return 0;
}