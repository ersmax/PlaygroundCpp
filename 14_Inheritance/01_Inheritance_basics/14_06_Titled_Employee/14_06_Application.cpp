#include <iostream>

#include "14_06_Titled_Employee.h"

int main()
{
	using myNamespaceEmployees::TitleEmployee;
	TitleEmployee John("John Burns", "123-456-7890", 150.0, "PhD");
	John.setName("John Wayne");
	John.printCheck();

	std::cout << '\n';
	return 0;
}