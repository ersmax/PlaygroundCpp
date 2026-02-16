/*
What is the difference between a friend function for a class and a member
function for a class?
*/

//   A friend function for a class can access all 
// the private members (variables and functions) of the class whom it is
// friend with. It is declared in the class whose it if friend with, but
// defined outside the class.
//   A member function is declared and defined within the class.

// Formally:
//   A friend function and a member function are alike in that they both can use any
// member of the class (either public or private) in their function definition.However,
// a friend function is defined and used just like an ordinary function; the dot operator
// is not used when you call a friend function and no type qualifier is used when you
// define a friend function.A member function, on the other hand, is called using an
// object name and the dot operator. Also, a member function definition includes a
// type qualifier consisting of the class name and the scope resolution operator, ::.

int main( )
{
	return 0;
}