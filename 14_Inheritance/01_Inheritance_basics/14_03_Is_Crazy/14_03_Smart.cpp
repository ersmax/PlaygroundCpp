#include <iostream>

#include "../14_02_Smart_But/14_02_Smart.h"

namespace myNamespace
{
	Smart::Smart() : a(0), b(0)
	{ /* body intentionally left empty */ }

	void Smart::printAnswer() const
	{
		std::cout << "a: " << a << " b: " << b << '\n';
	}

	void Smart::setValues(const int newA, const int newB)
	{
		a = newA;
		b = newB;
	}

	int Smart::getA() const { return a; }

	int Smart::getB() const { return b; }
}
