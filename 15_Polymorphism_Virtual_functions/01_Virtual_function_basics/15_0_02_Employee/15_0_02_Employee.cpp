//   This is the file 15_0_02_Employee.cpp.
// This is the implementation for the class Employee.
// The interface for the class Employee is in the header 
// file 15_0_02_Employee.h.

#include <iostream>
#include "15_0_02_Employee.h"

namespace myNamespaceEmployees
{

	Employee::Employee() : name("No name"), ssn("No number"), netPay(0)
	{ /* Body intentionally left empty */ }

	Employee::Employee(const std::string& theName, const std::string& theSsn) : name(theName), ssn(theSsn), netPay(0)
	{ /* Body intentionally left empty */ }

	const std::string& Employee::getName() const { return name; }

	const std::string& Employee::getSsn() const { return ssn; }

	double Employee::getNetPay() const { return netPay; }

	void Employee::setName(const std::string& newName) { name = newName; }

	void Employee::setSsn(const std::string& newSsn) { ssn = newSsn; }

	void Employee::setNetPay(const double newNetPay) { netPay = newNetPay; }

} // myNamespaceEmployees
