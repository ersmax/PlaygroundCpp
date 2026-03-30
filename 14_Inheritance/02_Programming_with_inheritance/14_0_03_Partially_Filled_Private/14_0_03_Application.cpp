//   This program tests the base class PFArrayD and derived class PFArrayDBack.
// The difference with program in 14_0_02 is that now the base class has private 
// attributes and not protected anymore.

#include <iostream>
#include "14_0_03_PF_Array_Backup.h"

void testBackup();

int main( )
{
	std::cout << "This program tests the class PFArrayDBack\n";
	char answer;
	do
	{
		testBackup();
		std::cout << "Test again? (y/n)\n";
		std::cin >> answer;
	} while (answer == 'y' || answer == 'Y');

	std::cout << '\n';
	return 0;
}

void testBackup()
{
	int capacity;
	std::cout << "Enter capacity of this array:\n";
	std::cin >> capacity;

	using myNamespace::PFArrayDBack;
	PFArrayDBack myArray(capacity);

	std::cout << "Enter up to " << capacity << " non negative numbers\n";
	std::cout << "Place a negative number at the end\n";

	double next;
	std::cin >> next;
	while ((next >= 0) && (!myArray.full()))
	{
		myArray.addElement(next);
		std::cin >> next;
	}
	if (next >= 0)
	{
		std::cout << "Could not read all numbers\n";
		// Clear unread input
		while (next >= 0)
			std::cin >> next;
	}
	
	int  count = myArray.getNumberUsed();
	std::cout << "The following " << count << " numbers read and stored:\n";
	for (int idx = 0; idx < count; idx++)
		std::cout << myArray[idx] << " ";
	std::cout << '\n';

	std::cout << "Backing up array\n";
	myArray.backup();

	std::cout << "Emptying the array\n";
	myArray.emptyArray();
	std::cout << myArray.getNumberUsed() << " numbers are now stored in the array\n";

	std::cout << "Restoring the array\n";
	myArray.restore();
	count = myArray.getNumberUsed();
	std::cout << "The following " << count << " numbers are now stored:\n";
	for (int idx = 0; idx < count; idx++)
		std::cout << myArray[idx] << ' ';
	std::cout << '\n';
}