//   This program demonstrates the use of constructors to initialize objects
// and initialize its member variables.

#include <iostream>
#include <cstdlib>

class DayOfYear
{
public:
	DayOfYear(int monthValue, int dayValue);
	//   Precondition: monthValue and dayValue are valid dates
	//   Postcondition: Initializes month and day to parameters list
	DayOfYear(int monthValue);
	//   Precondition: monthValue is a valid month
	//   Postcondition: Initializes month to the parameter, day to 1st
	DayOfYear();
	//   Postcondition: Initializes month to January and day to 1st
	void input();
	void output() const;
	int getMonthNumber() const;
	int getDayNumber() const;
private:
	int month;
	int day;
	int testMonth(int month);
	int testDay(int day);
	//   Postcondition: Validate month and day numbers
};

int main()
{
	DayOfYear date1(2, 21), date2(5), date3;
	std::cout << "Initialized dates:\n";
	date1.output();
	date2.output();
	date3.output();
	std::cout << "date1 reset to the following:\n";
	// explicit call to constructor DayOfYear::DayOfYear(int month, int day)
	date1 = DayOfYear(10, 31);	
	date1.output();
	std::cout << "\n";
	return 0;

}

DayOfYear::DayOfYear(const int monthValue, const int dayValue) 
{
	month = testMonth(monthValue);
	day = testDay(dayValue);
}

DayOfYear::DayOfYear(const int monthValue) 
					: month(testMonth(monthValue)), 
					  day(testDay(1))
{}

DayOfYear::DayOfYear() 
					: month(testMonth(1)), 
					  day(testDay(1))
{}

int DayOfYear::testMonth(const int month)
{
	if ((month < 1) || (month > 12))
	{
		std::cout << "Illegal month value\n";
		std::exit(-1);
	}
	return month;
}

int DayOfYear::testDay(const int day)
{
	if ((day < 1) || (day > 31))
	{
		std::cout << "Illegal day value\n";
		std::exit(-1);
	}
	return day;
}

void DayOfYear::input()
{
	int monthN, dayN;
	std::cout << "Enter the month as a number: ";
	std::cin >> monthN;
	std::cout << "Enter the day of the month: ";
	std::cin >> dayN;
	if ((monthN < 1) || (monthN > 12) ||
		(dayN < 1) || (dayN > 31))
	{
		std::cout << "Illegal date. Program aborted\n";
		std::exit(-1);
	}
	month = monthN;
	day = dayN;
}

int DayOfYear::getDayNumber() const
{
	return day;
}

int DayOfYear::getMonthNumber() const
{
	return month;
}

void DayOfYear::output() const
{
	switch (month)
	{
	case 1:
		std::cout << "January"; break;
	case 2:
		std::cout << "February"; break;
	case 3:
		std::cout << "March"; break;
	case 4:
		std::cout << "April"; break;
	case 5:
		std::cout << "May"; break;
	case 6:
		std::cout << "June"; break;
	case 7:
		std::cout << "July"; break;
	case 8:
		std::cout << "August"; break;
	case 9:
		std::cout << "September"; break;
	case 10:
		std::cout << "October"; break;
	case 11:
		std::cout << "November"; break;
	case 12:
		std::cout << "December"; break;
	default:
		std::cout << "Error in DayOfYear::output";
		break;
	}
	std::cout << " " << day << "\n";
}
