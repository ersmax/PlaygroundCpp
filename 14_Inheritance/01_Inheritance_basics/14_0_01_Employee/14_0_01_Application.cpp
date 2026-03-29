//   This is the application file to test the base class Employee
// and the derived classes HourlyEmployee and SalariedEmployee

#include <iostream>
#include "14_0_01_Hourly_Employee.h"
#include "14_0_01_Salaried_Employee.h"

int main( )
{
	using myNamespaceEmployees::HourlyEmployee;
	using myNamespaceEmployees::SalariedEmployee;

	HourlyEmployee joe;
	joe.setName("Mighty Joe");
	joe.setSsn("123-45-6789");
	joe.setRate(20.50);
	joe.setHours(40);
	std::cout	<< "Check for " << joe.getName()
				<< " for " << joe.getHours() << " hours.\n";
	joe.printCheck();
	std::cout << '\n';

	SalariedEmployee boss("Mr. Big Shot", "987-65-4321", 10500.50);
	std::cout << "Check for " << boss.getName() << '\n';
	boss.printCheck();

	std::cout << '\n';
	return 0;
}