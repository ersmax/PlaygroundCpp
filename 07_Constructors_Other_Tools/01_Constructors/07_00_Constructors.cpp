#include <iostream>

class DayOfYear
{
public:
	DayOfYear();
	// Initializes to January 1st
	DayOfYear(int monthValue);
	// Initializes to monthValue 1st
	DayOfYear(int monthValue, int dayValue);
	// Initializes to monthValue and dayValue 
	void input();
	void output();
	void set(int newMonth, int newDay);
	int getMonthNumber() const;
	int getDay() const;
private:
	int month;
	int day;
};

DayOfYear::DayOfYear() : month(1), day(1)
{
}

DayOfYear::DayOfYear(const int monthValue)
{
	month = monthValue;
	day = 1;
}

DayOfYear::DayOfYear(const int monthValue, const int dayValue)
	: month(monthValue), day(dayValue)
{
	if ((month < 1) || (month > 12))
	{
		std::cout << "Illegal month value!\n";
		std::exit(-1);
	}
	if ((day < 1) || (day > 31))
	{
		std::cout << "Illegal day value!\n";
		std::exit(-1);
	}
}


void DayOfYear::set(const int newMonth, const int newDay)
{
	month = newMonth;
	day = newDay;
}

int DayOfYear::getMonthNumber() const
{
	return month;
}

int DayOfYear::getDay() const
{
	return day;
}

int main()
{
	// DayOfYear date1, date2;		// PROBLEMS
	// date1.DayOfYear(7, 4);		// ILLEGAL
	// date2.DayOfYear(5, 5);		// ILLEGAL
	DayOfYear date1(7, 4), date2(5);
	std::cout << date1.getMonthNumber() << "\n";
	std::cout << date2.getDay();

	std::cout << "\n";
	return 0;
}