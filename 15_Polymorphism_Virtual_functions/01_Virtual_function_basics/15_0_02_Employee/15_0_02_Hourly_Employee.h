//   This is the header file 15_0_02_Hourly_Employee.
// This is the interface for the class HourlyEmployee.

#ifndef HOURLY_EMPLOYEE_15_0_02_H
#define HOURLY_EMPLOYEE_15_0_02_H

#include "15_0_02_Employee.h"

namespace myNamespaceEmployees
{
	class HourlyEmployee : public Employee
	{
	public:
		HourlyEmployee( );
		HourlyEmployee(	const std::string& theName, const std::string& theSsn,
						double theWageRate, double theHours);
		void setRate(double newWageRate);
		void setHours(double hoursWorked);
		double getRate() const;
		double getHours() const;
		virtual void printCheck() override final;
		// Override base class function behavior of printCheck()
	private:
		double wageRate;
		double hours;
	};
	
} // myNamespaceEmployees

#endif // HOURLY_EMPLOYEE_15_0_02_H