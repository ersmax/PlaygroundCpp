//   This is the file 15_0_01_Discount_sale.h
// This is the interface for the derived class DiscountSale 
// from base class Sale

#ifndef DISCOUNT_SALE_15_0_01_H
#define DISCOUNT_SALE_15_0_01_H

#include "15_0_01_Sale.h"

namespace myNamespaceSale
{
	class DiscountSale : public Sale
	{
	public:
		DiscountSale();
		DiscountSale(double thePrice, double theDiscount);
		//   Precondition: discount is expressed as a percentage 
		// of the price.
		double getDiscount() const;
		void setDiscount(double newDiscount);
		virtual double bill() const override;
	private:
		double discount;
	};

} // myNamespaceSale

#endif // DISCOUNT_SALE_15_0_01_H

