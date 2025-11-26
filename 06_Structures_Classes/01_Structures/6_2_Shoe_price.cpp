/*
Consider the following type definition:
struct ShoeType
{
char style;
double price;
};
Given the previous structure-type definitions, what will be the output produced
by the following code?
ShoeType shoe1, shoe2;
shoe1.style ='A';
shoe1.price = 9.99;
cout << shoe1.style << " $" << shoe1.price << endl;
shoe2 = shoe1;
shoe2.price = shoe2.price/9;
cout << shoe2.style << " $" << shoe2.price << endl;
*/

// A 9.99
// A 1.11

#include <iostream>

struct ShoeType
{
	char style;
	double price;
};

int main( )
{
	ShoeType shoe1, shoe2;
	shoe1.style = 'A';
	shoe1.price = 9.99;
	std::cout << shoe1.style << " $" << shoe1.price << std::endl;
	shoe2 = shoe1;
	shoe2.price = shoe2.price / 9;
	std::cout << shoe2.style << " $" << shoe2.price << std::endl;
	return 0;
}
