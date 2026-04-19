//   This is the header file 15_0_02_Employee.h.
// This is the interface for the abstract class Employee.
// The difference with the previous implementation is the 
// use of the abstract class and pure virtual function 
// that has no implementation in the base class.

#ifndef EMPLOYEE_15_0_02_H
#define EMPLOYEE_15_0_02_H

#include <string>

namespace myNamespaceEmployees
{
	class Employee
	{
	public:
		Employee();
		Employee(const std::string& theName, const std::string& theSsn);
		const std::string& getName() const;
		const std::string& getSsn() const;
		double getNetPay() const;
		void setName(const std::string& newName);
		void setSsn(const std::string& newSsn);
		void setNetPay(double newNetPay);
		virtual void printCheck() = 0;
	private:
		std::string name;
		std::string ssn;
		double netPay;
	};

} // myNamespaceEmployees

#endif // EMPLOYEE_15_0_02_H
