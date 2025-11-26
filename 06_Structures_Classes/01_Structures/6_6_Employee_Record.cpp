/*
Write a definition for a structure type for records consisting of a person’s wage
rate, accrued vacation (which is some whole number of days), and status (which
is either hourly or salaried). Represent the status as one of the two char values
'H' and 'S'. Call the type EmployeeRecord.
*/

#include <iostream>

struct EmployeeRecord
{
	double rate;
	int accruedVacation;
	char status;
};

int main( )
{
	return 0;
}