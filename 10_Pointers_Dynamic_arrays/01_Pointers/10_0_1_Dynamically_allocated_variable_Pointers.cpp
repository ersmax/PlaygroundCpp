//   This program showcases the basic use of pointer manipulation and dynamic variables.
// Dynamic variables are created and destroyed while the program is running.
// The `new` operator produces a new, nameless variable and returns a pointer that points to 
// this new variable.

#include <iostream>

int main( )
{
	int *p1 = new int;
	*p1 = 42;
	int *p2 = p1;

	std::cout << "*p1 == " << *p1 << '\n';
	std::cout << "*p2 == " << *p2 << '\n';

	p1 = new int;	// now p1 points to the address of a new dynamically allocated nameless variable
	*p1 = 88;
	std::cout << "*p1 == " << *p1 << '\n';
	std::cout << "*p2 == " << *p2 << '\n';

	return 0;
}