/*
Suppose your program contains the following class definition:
class Automobile
{
public:
void setPrice(double newPrice);
void setProfit(double newProfit);
double getPrice( );
private:
double price;
double profit;
double getProfit( );
};
and suppose the main function of your program contains the following
declaration and that the program somehow sets the values of all the member
variables to some values:
Automobile hyundai, jaguar;
Which of the following statements are then allowed in the main function of
your program?
hyundai.price = 4999.99;
jaguar.setPrice(30000.97);
double aPrice, aProfit;
aPrice = jaguar.getPrice( );
aProfit = jaguar.getProfit( );
aProfit = hyundai.getProfit( );
hyundai = jaguar;
*/

// hyundai.price = 4999.99;			// Wrong: price is abstract and private
// jaguar.setPrice(30000.97);		// OK
// double aPrice, aProfit;			// OK
// aPrice = jaguar.getPrice();		// OK
// aProfit = jaguar.getProfit();	// Wrong: getProfit is abstract function
// aProfit = hyundai.getProfit();	// Wrong: getProfit is abstract function
// hyundai = jaguar;				// OK

#include <iostream>

class Automobile
{
public:
	void setPrice(double newPrice);
	void setProfit(double newProfit);
	double getPrice() const;
private:
	double price;
	double profit;
	double getProfit() const;
};

int main( )
{
	Automobile myCar;
	myCar.setPrice(10000.50);
	myCar.setProfit(2000.0);
	std::cout << "Car's price: " << myCar.getPrice() << "\n";
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
