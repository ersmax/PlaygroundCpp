//  Is the following a legal definition of the member function isCrazy in the
// derived class SmartBut discussed in Self - Test Exercise 2 ? Explain your answer.
// (Remember, the question asks if it is legal, not if it is a sensible definition.)


//   It is not legal because 'a' and 'b' are private member variables 
// of the base class, hence not accessible to the derived class.


#include "../14_02_Smart_But/14_02_Smart_But.h"

namespace myNamespace
{
	SmartBut::SmartBut() : Smart(), crazy(false)
	{ /* body intentionally left empty */ }

	SmartBut::SmartBut(const int newA, const int newB, const bool newStatus) : Smart(), crazy(newStatus) 
	{
		setValues(newA, newB);
	}

	bool SmartBut::isCrazy() const
	{
		if (a > b)	return crazy;
		else		return true;
	}
}
