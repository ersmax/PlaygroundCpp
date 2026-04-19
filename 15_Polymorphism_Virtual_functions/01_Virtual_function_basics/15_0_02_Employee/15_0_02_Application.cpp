//   This is the application file to test the base class Employee
// and the derived classes HourlyEmployee and SalariedEmployee

#include <iostream>
#include "15_0_02_Hourly_Employee.h"
#include "15_0_02_Salaried_Employee.h"

int main( )
{
	using myNamespaceEmployees::HourlyEmployee;
	using myNamespaceEmployees::SalariedEmployee;
	using myNamespaceEmployees::Employee;

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

	/* Cannot instantiate an abstract class */
	//Employee test;
	//test.setName("A test");
	//test.setSsn("123-456-7890");
	//test.setNetPay(1234);
	//test.printCheck();

	std::cout << '\n';
	return 0;
}
