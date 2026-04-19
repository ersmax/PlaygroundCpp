//   This is the file 15_0_01_Sale.cpp.
// This is the implementation for the class Sale.
// The interface for the class Sale can be found in the file 15_0_01_Sale.h

#include <iostream>
#include "15_0_01_Sale.h"

namespace myNamespaceSale
{
	Sale::Sale() : price(0)
	{ /* Body intentionally left empty */ }

	Sale::Sale(const double thePrice)
	{
		if (thePrice >= 0)	price = thePrice;
		else
		{
			std::cout << "Error: Cannot have a negative price\n";
			std::exit(1);
		}
	}

	double Sale::bill() const { return price; }

	double Sale::getPrice() const { return price; }

	void Sale::setPrice(const double newPrice)
	{
		if (newPrice >= 0)	price = newPrice;
		else
		{
			std::cout << "Error: cannot have a negative price!\n";
		}
	}

	double Sale::savings(const Sale& other) const
	{
		return bill() - other.bill();
	}

	bool operator <(const Sale& first, const Sale& second)
	{
		return (first.bill() < second.bill());
	}

} // myNamespaceSale