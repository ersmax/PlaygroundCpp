/*
Give a function definition corresponding to the following function declaration.
(The type ShoeType is given in Self-Test Exercise 2.)
void readShoeRecord(ShoeType& newShoe);
//Fills newShoe with values read from the keyboard.
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

int main( )
{
	ShoeType myShoe;
	readShoeRecord(myShoe);
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
