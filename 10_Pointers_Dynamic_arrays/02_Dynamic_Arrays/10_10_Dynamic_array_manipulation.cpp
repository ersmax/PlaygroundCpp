//Suppose your program contains code to create a dynamically allocated array as
//follows :
//int* entry;
//entry = new int[10];
//so that the pointer variable entry is pointing to this dynamically allocated
//array.Write code to fill this array with ten numbers typed in at the keyboard

#include <iostream>

int main( )
{
	int *entry;
	entry = new int[10];

	for (int idx = 0; idx < 10; idx++)
		std::cin >> entry[idx];
	std::cout << '\n';
	return 0;
}