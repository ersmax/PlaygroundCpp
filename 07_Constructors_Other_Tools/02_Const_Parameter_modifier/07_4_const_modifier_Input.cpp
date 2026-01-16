/*
Why would it be incorrect to add the modifier const, as shown next, to the
declaration for the member function input of the class BankAccount given in
Display 7.2 ?
*/

//   This would be incorrect because the function input may change
// the member attribute.

// Formally:
// The member function input changes the value of its calling object, and so the
// compiler will issue an error message if you add the const modifier.

#include <iostream>

class BankAccount
{
public:
	void input() const;		// you may change the value of calling object
private:
};

int main( )
{
	std::cout << '\n';
	return 0;
}