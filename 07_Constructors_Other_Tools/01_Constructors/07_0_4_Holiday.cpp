//  This program illustrates the use of class type member variables
// in another class.

#include <iostream>
#include <cstdlib>

class DayOfYear
{
public:
	DayOfYear(int monthValue, int dayValue);
	DayOfYear(int monthValue);
	DayOfYear();
	void input();
	void output() const;
	int getMonthNumber() const;
	int getDay() const;
private:
	int month;
	int day;
	int testMonth(int month);
	//   Postcondition: return whether month is valid or not
	int testDay(int day);
	//   Postcondition: return whether day is valid or not
};

class Holiday
{
public:
	Holiday();
	Holiday(int month, int day, bool theEnforcement);
	void output();
private:
	DayOfYear date;
	bool parkingEnforcement;
};

int main( )
{
	Holiday h1, h2(2, 14, true);
	std::cout << "Testing class holiday\n";
	h1.output();
	std::cout << "Testing class 2 holiday\n";
	h2.output();
	std::cout << '\n';
	return 0;
}

Holiday::Holiday(const int month, const int day, const bool theEnforcement) 
				: date(month, day), parkingEnforcement(theEnforcement)
{}

Holiday::Holiday() : date(), parkingEnforcement(false) 
{}

void Holiday::output()
{
	date.output();
	if (parkingEnforcement)	std::cout << "Parking enforcement in action\n";
	else					std::cout << "No parking enforcement\n";
	std::cout << '\n';
}

DayOfYear::DayOfYear(int monthValue, int dayValue) 
{
	month = testMonth(monthValue);
	day = testDay(dayValue);
}

DayOfYear::DayOfYear(const int monthValue) 
					: month(testMonth(monthValue)), 
					  day(1)
{}

DayOfYear::DayOfYear() : month(1), day(1)
{}

int DayOfYear::testMonth(const int month)
{
	if (month < 1 || month > 12)
	{
		std::cerr << "Illegal value for month \n";
		std::exit(-1);
	}
	return month;
}

int DayOfYear::testDay(const int day)
{
	if (day < 1 || day > 31)
	{
		std::cerr << "Illegal value for day \n";
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
	month = testMonth(monthN);
	day = testDay(dayN);
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

int DayOfYear::getDay() const
{
	return day;
}

int DayOfYear::getMonthNumber() const
{
	return month;
}
