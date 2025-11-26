#include <iostream>

struct FertilizerStock
{
	double quantity;
	double nitrogenContent;
};

struct CropYield
{
	double quantity;
	double size;
} oranges;

int main( )
{
	//CropYield oranges;
	FertilizerStock superGrow;

	oranges.quantity = 10.0;
	oranges.size = 20.0;

	superGrow.quantity = 20.5;
	superGrow.nitrogenContent = 10.2;

	CropYield apples = oranges;

	std::cout << "Apple's qty: " << apples.quantity << "\n"
		<< "Apple's size: " << apples.size << "\n";

	std::cout << "\n";
	return 0;
}