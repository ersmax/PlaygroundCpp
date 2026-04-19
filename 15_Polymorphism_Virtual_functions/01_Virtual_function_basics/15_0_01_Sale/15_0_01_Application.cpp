//   Demonstrates the performance of the virtual function bill.

#include <iomanip>	// for std::setprecision
#include <iostream>
#include "15_0_01_Discount_sale.h"

int main( )
{
	using myNamespaceSale::DiscountSale;
	using myNamespaceSale::Sale;

	Sale simple(10.00);
	// One item at $10.00
	DiscountSale discount(10.00, 10);
	// One item at $11.00 with 10% discount
	// std::cout.setf(std::ios::fixed);		// use-fixed point notation (no exp)
	// std::cout.setf(std::ios::showpoint);	// use decimal point & trailing 0s (e.g. 10.00)
	// std::cout.precision(2);
	std::cout << std::fixed << std::showpoint << std::setprecision(2);

	if (discount < simple)
	{
		std::cout << "Discounted item is cheaper.\n";
		std::cout << "Saving is $" << simple.savings(discount) << '\n';
	}
	else if (simple < discount)
		std::cout << "Discounted item is not cheaper. It costs: " << (-1) * simple.savings(discount) << " more\n";
	else
		std::cout << "The items cost the same\n";

	std::cout << '\n';
	return 0;
}