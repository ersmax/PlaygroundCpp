//  Is the following a legal definition of the member function isCrazy in the
// derived class SmartBut discussed in Self - Test Exercise 2 ? Explain your answer.
// (Remember, the question asks if it is legal, not if it is a sensible definition.)

// bool SmartBut::isCrazy() const
// {
//	 if (a > b)	return crazy;
//	 else		return true;
// }
//   It is legal because 'a' and 'b' are protected member variables 
// of the base class, hence accessible to the derived class.

// Formally:
//   It is legal because a and b are marked protected in the base class Smart, so they
// can be accessed by name in a derived class.If a and b had instead been marked
// private, then this would be illegal.


#include <iostream>

#include "../14_02_Smart_But/14_02_Smart_But.h"

int main( )
{
	using myNamespace::SmartBut;

	const SmartBut anObject(3, 2, true);
	anObject.printAnswer();
	std::cout << std::boolalpha << anObject.isCrazy();
	
	std::cout << '\n';
	return 0;
}