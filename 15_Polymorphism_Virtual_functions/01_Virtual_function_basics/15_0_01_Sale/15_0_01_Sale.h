//   This is the header file 15_0_01_Sale.h
// This is the interface for the class Sale.
// Sale is a class for simple sales and is the base class.

#ifndef SALE_15_0_01_H
#define SALE_15_0_01_H

namespace myNamespaceSale
{
	class Sale
	{
	public:
		Sale();
		Sale(double thePrice);
		double getPrice() const;
		void setPrice(double newPrice);
		virtual double bill() const;
		double savings(const Sale& other) const;
	private:
		double price;
	};

	bool operator <(const Sale& first, const Sale& second);
	//   Postcondition: Compares two sales to see which is smaller

} // myNamespaceSale

#endif // SALE_15_0_01_H
