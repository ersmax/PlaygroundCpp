//  Is the following program legal (assuming appropriate #include and using
// directives are added) ?

// Yes, an object of a derived class is of the same type
// of the object of a base class.

// Formally:
//  Yes.You can plug in an object of a derived class for a parameter of the base class
// type.An HourlyEmployee is an Employee.A SalariedEmployee is an Employee.

#include <iostream>
#include "../14_0_01_Employee/14_0_01_Hourly_Employee.h"
#include "../14_0_01_Employee/14_0_01_Salaried_Employee.h"


void showEmployeeData(const myNamespaceEmployees::Employee& object);

int main()
{
	using myNamespaceEmployees::HourlyEmployee;
	using myNamespaceEmployees::SalariedEmployee;

	const HourlyEmployee joe("Mighty Joe", "123-45-6789", 20.50, 40);
	const SalariedEmployee boss("Mr. Big Shot", "987-65-4321", 10500.50);
	showEmployeeData(joe);
	showEmployeeData(boss);

	std::cout << '\n';
	return 0;
}

void showEmployeeData(const myNamespaceEmployees::Employee& object)
{
	using myNamespaceEmployees::Employee;
	std::cout << "Name: " << object.getName() << '\n';
	std::cout << "Social Security Number: " << object.getSsn() << '\n';
	std::cout << std::string(25, '_') << '\n';
}
