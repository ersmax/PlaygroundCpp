//   This is the implementation file for the class DiscountSale.
// This is the file 15_0_01_Discount_sale.cpp.
// The interface for the class DiscountSale is in the header file 15_0_01_Discount_sale.h

#include "15_0_01_Discount_sale.h"

namespace myNamespaceSale
{
	DiscountSale::DiscountSale() : Sale(), discount(0)
	{ /* Body intentionally left empty */ }

	DiscountSale::DiscountSale(const double thePrice, const double theDiscount) : Sale(thePrice), discount(theDiscount)
	{ /* Body intentionally left empty */ }

	double DiscountSale::getDiscount() const { return discount; }

	void DiscountSale::setDiscount(const double newDiscount) { discount = newDiscount; }

	double DiscountSale::bill() const
	{
		const double fraction = discount / 100;
		return (1 - fraction) * getPrice();
	}

} // myNamespaceSale