/*
What is a default constructor? Does every class have a default constructor?
*/

//   A default constructor is a constructor without arguments.
// If no constructors are declared, this is created automatically.

// Formally:
// A default constructor is a constructor that takes no arguments.Not every class
// has a default constructor.If you define absolutely no constructors for a class, then
// a default constructor will be automatically provided.On the other hand, if you
// define one or more constructors but do not define a default constructor, then your
// class will have no default constructor.

#include <iostream>

int main( )
{
	std::cout << "\n";
	return 0;
}
