//   This is the header file 15_0_01_Salaried_Employee.h.
// This is the interface for the class SalariedEmployee.
#ifndef SALARIED_EMPLOYEE_15_0_02_H
#define SALARIED_EMPLOYEE_15_0_02_H

#include "15_0_02_Employee.h"

namespace myNamespaceEmployees
{
	class SalariedEmployee : public Employee
	{
	public:
		SalariedEmployee();
		SalariedEmployee(const std::string& theName, const std::string& theSsn, double theWeeklySalary);
		double getSalary() const;
		void setSalary(double newSalary);
		virtual void printCheck() override final;
		// Override base class function behavior of printCheck()
	private:
		double salary;	// weekly
	};
} // myNamespaceEmployees

#endif // SALARIED_EMPLOYEE_15_0_02_H