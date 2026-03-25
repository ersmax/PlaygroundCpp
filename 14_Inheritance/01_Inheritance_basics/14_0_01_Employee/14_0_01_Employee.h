//   This is the header file 14_0_01_Employee.h
// This is the interface for the class Employee.
//   This is primarily intended to be used as a base class 
// to derive classes for different kinds of employees.

#ifndef EMPLOYEE_14_0_01_H
#define EMPLOYEE_14_0_01_H

#include <string>

namespace myNamespaceEmployees
{
	class Employee
	{
	public:
		Employee();
		Employee(const std::string& theName, const std::string& theSsn);
		std::string getName() const;
		std::string getSsn() const;
		double getNetPay() const;
		void setName(const std::string& newName);
		void setSsn(const std::string& newSsn);
		void setNetPay(double newNetPay);
		static void printCheck();
	private:
		std::string name;
		std::string ssn;
		double netPay;
	};
} // myNamespaceEmployees


#endif // EMPLOYEE_14_0_01_H

