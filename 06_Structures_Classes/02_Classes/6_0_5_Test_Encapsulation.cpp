//   This program simply re-write 6.0.4 in terms of Months (first 3 letters)
// to test proper encapsulation.

#include <iostream>
#include <cstdlib>
#include <string>

class DayOfYear
{
public:
	void input();
	void output() const;
	void set(int newMonth, int newDay);
	//   Postcondition: newMonth and newDay form a new Date
	void set(int newMonth);
	//   Precondition: 1 <= newMonth <= 12
	//   Postcondition: the date is set to the first day of 
	// the given `newMonth`
	int getMonthNumber() const;
	//   Postcondition: Returns 1 for Jan, 2 for Feb, etc.
	int getDay() const;
private:
	int month;
	char firstLetter;	// of month
	char secondLetter;
	char thirdLetter;
	int day = 0;
	void convertMonth(int month);
	//   Precondition: month is input by the user 
	//   Postcondition: auxiliary function that converts
	// the n. of month into the first 3 digits of such month
};

int main()
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
		(today.getDay() == birthday.getDay()))
		std::cout << "Happy Birthday and Merry Christmas!\n";

	std::cout << "\n";
	return 0;
}

void DayOfYear::input()
{
	std::cout << "Enter the month as a number: ";
	std::cin >> month;
	convertMonth(month);
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
	std::string labelMonth;
	labelMonth.reserve(3);

	labelMonth += firstLetter;
	labelMonth += secondLetter;
	labelMonth += thirdLetter;
	std::cout << labelMonth << " " << day << "\n";
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
	convertMonth(month);
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
	convertMonth(month);
}

int DayOfYear::getMonthNumber() const
{
	return month;
}

int DayOfYear::getDay() const
{
	return day;
}

void DayOfYear::convertMonth(const int month)
{
	switch (month)
	{
	case 1:
		firstLetter = 'J'; 
		secondLetter = 'a';
		thirdLetter = 'n';
		break;
	case 2:
		firstLetter = 'F';
		secondLetter = 'e';
		thirdLetter = 'b';
		break;
	case 3:
		firstLetter = 'M';
		secondLetter = 'a';
		thirdLetter = 'r';
		break;
	case 4:
		firstLetter = 'A';
		secondLetter = 'p';
		thirdLetter = 'r';
		break;
	case 5:
		firstLetter = 'M';
		secondLetter = 'a';
		thirdLetter = 'y';
		break;
	case 6:
		firstLetter = 'J';
		secondLetter = 'u';
		thirdLetter = 'n';
		break;
	case 7:
		firstLetter = 'J';
		secondLetter = 'u';
		thirdLetter = 'l';
		break;
	case 8:
		firstLetter = 'A';
		secondLetter = 'u';
		thirdLetter = 'g';
		break;
	case 9:
		firstLetter = 'S';
		secondLetter = 'e';
		thirdLetter = 'p';
		break;
	case 10:
		firstLetter = 'O';
		secondLetter = 'c';
		thirdLetter = 't';
		break;
	case 11:
		firstLetter = 'N';
		secondLetter = 'o';
		thirdLetter = 'v';
		break;
	case 12:
		firstLetter = 'D';
		secondLetter = 'e';
		thirdLetter = 'c';
		break;
	default:
		std::cout << "Error in DayOfYear::output";
		break;
	}
}
