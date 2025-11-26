/*
Give a function definition corresponding to the following function declaration.
(The type ShoeType is given in Self-Test Exercise 2.)
ShoeType discount(ShoeType oldRecord);
//Returns a structure that is the same as its argument,
//but with the price reduced by 10%.
*/

#include <iostream>

struct ShoeType
{
	char style;
	double price;
};

void readShoeRecord(ShoeType& newShoe);
//   Precondition: newShoe is a struct type declared
//   Postcondition: read member values from keyboard
// and store the value in the structure value.

ShoeType discount(const ShoeType& oldRecord);
//   Precondition: structure variable oldRecord has a valid structure value
//   Postcondition: apply discount of 10% to price and return the 
// new structure with discounted value

void showOffer(const ShoeType& shoe);
//   Postcondition: show all member values of the structure parameter

int main()
{
	ShoeType myShoe;
	readShoeRecord(myShoe);
	ShoeType discountedShoe = discount(myShoe);
	showOffer(myShoe);
	showOffer(discountedShoe);
	std::cout << "\n";
	return 0;
}

void readShoeRecord(ShoeType& newShoe)
{
	std::cout << "Enter the style: ";
	std::cin >> newShoe.style;
	std::cout << "Enter the price: ";
	std::cin >> newShoe.price;
}

ShoeType discount(const ShoeType& oldRecord)
{
	ShoeType temp = oldRecord;
	temp.price *= 0.9;
	return temp;
}

void showOffer(const ShoeType& shoe)
{
	std::cout << std::string(10, '-') << "\n";
	std::cout << "Name of style: " << shoe.style << "\n"
		<< "Price: " << shoe.price << "\n";
}
