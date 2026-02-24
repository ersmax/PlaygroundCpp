//Suppose your program contains code to create a dynamically allocated array as
//in Self - Test Exercise 10, and suppose the pointer variable entry has not had its
//(pointer) value changed.Write code to destroy this dynamically allocated array
//and return the memory it uses to the freestore manager.


#include <iostream>

int main()
{
	int* entry;
	entry = new int[10];

	for (int idx = 0; idx < 10; idx++)
		std::cin >> entry[idx];

	delete [] entry;
	entry = nullptr;

	std::cout << '\n';
	return 0;
}