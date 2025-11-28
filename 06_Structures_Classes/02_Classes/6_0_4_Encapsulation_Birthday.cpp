//   This program shows the principle of encapsulation:
// making data and details of member functions of a class abstract, 
// so that details of data and operations are hidden 
// to programmers that use the class.

#include <iostream>
#include <cstdlib>

class DayOfYear
{
public:
	void input( );
	void output( ) const;
	void set(int newMonth, int newDay);
	//   Postcondition: newMonth and newDay form a new Date
	void set(int newMonth);
	//   Precondition: 1 <= newMonth <= 12
	//   Postcondition: the date is set to the first day of 
	// the given `newMonth`
	int getMonthNumber() const;
	int getDay() const;
private:
	int month;
	int day;
};

int main( )
{
	DayOfYear today, birthday;
	std::cout << "Enter today's date:\n";
	today.input();
	std::cout << "Today's date: ";
	today.output();

	birthday.set(12, 25);
	std::cout << "St. J's birthday is ";
	birthday.output();
	if ((today.getMonthNumber() == birthday.getMonthNumber()) &&
		(today.getDay() == today.getDay()) )
		std::cout << "Happy Birthday and Merry Christmas!\n";

	std::cout << "\n";
	return 0;
}

void DayOfYear::input()
{
	std::cout << "Enter the month as a number: ";
	std::cin >> month;
	std::cout << "Enter the day of the month: ";
	std::cin >> day;
	if ((month < 1) || (month > 12) || 
		(day < 1) || (day > 31))
	{
		std::cout << "Illegal date. Program aborted\n";
		std::exit(-1);
	}
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

void DayOfYear::set(const int newMonth, const int newDay)
{
	if ((newMonth < 1) || (newMonth > 12) ||
		(newDay < 1) || (newDay > 31))
	{
		std::cout << "Illegal date\n";
		std::exit(-1);
	}
	month = newMonth;
	day = newDay;
}

void DayOfYear::set(const int newMonth)
{
	if ((newMonth < 1) || (newMonth > 12))
	{
		std::cout << "Illegal date\n";
		std::exit(-1);
	}
	month = newMonth;
	day = 1;
}

int DayOfYear::getMonthNumber() const
{
	return month;
}

int DayOfYear::getDay() const
{
	return day;
}
