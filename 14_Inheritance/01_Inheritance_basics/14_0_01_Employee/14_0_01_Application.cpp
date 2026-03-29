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

	std::cout << '\n';
	return 0;
}