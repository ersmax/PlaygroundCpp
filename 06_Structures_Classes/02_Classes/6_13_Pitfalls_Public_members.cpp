/*
Suppose you change Self-Test Exercise 12 so that in the definition of the class
Automobile all member variables are public instead of private. How would this
change your answer to the question in Self-Test Exercise 12?
*/

// Every assignment below (variable definition) and declaration would be correct.
// hyundai.price = 4999.99;			// OK
// jaguar.setPrice(30000.97);		// OK
// double aPrice, aProfit;			// OK
// aPrice = jaguar.getPrice();		// OK
// aProfit = jaguar.getProfit();	// OK
// aProfit = hyundai.getProfit();	// OK
// hyundai = jaguar;				// OK

#include <iomanip>
#include <iostream>

class Automobile
{
public:
	void setPrice(double newPrice);
	void setProfit(double newProfit);
	double getPrice() const;
	double getProfit() const;
	double price;
	double profit;
};

int main()
{
	Automobile hyundai, jaguar;
	hyundai.price = 4999.99;
	jaguar.setPrice(30000.97);
	double aPrice, aProfit;
	aPrice = jaguar.getPrice();
	aProfit = jaguar.getProfit();
	aProfit = hyundai.getProfit();
	hyundai = jaguar;
	std::cout << std::fixed << std::showpoint << std::setprecision(2);
	std::cout << "Hyundai's new price: " << hyundai.getPrice() << "\n";
	std::cout << "\n";
	return 0;
}

void Automobile::setPrice(const double newPrice)
{
	price = (newPrice >= 0) ? newPrice : 0;
}

void Automobile::setProfit(const double newProfit)
{
	profit = newProfit;
}

double Automobile::getPrice() const
{
	return price;
}

double Automobile::getProfit() const
{
	return profit;
}

