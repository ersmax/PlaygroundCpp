/*
Here we have redefined the class DayOfYear from Display 6.3 so that it now has
one additional member function called input. Write an appropriate definition
for the member function input.
class DayOfYear
{
public:
void input( );
void output( );
int month;
int day;
};
*/

#include <iostream> 

class DayOfYear
{
public:
	void input();
	void output() const;
	//    Postcondition: show date in proper format
	int month;
	int day;
};

int main()
{
	DayOfYear today, birthday;
	std::cout << "Enter today's date\n";
	today.input();
	std::cout << "Enter your birthday\n";
	birthday.input();
	std::cout << "Today is: ";
	today.output();
	std::cout << "\n";
	std::cout << "Your birthday is: ";
	birthday.output();
	std::cout << "\n";

	if ((today.month == birthday.month) &&
		(today.day == birthday.day))
		std::cout << "Happy birthday!\n";

	std::cout << "\n";
	return 0;
}

void DayOfYear::output() const
{
	switch (month)
	{
	case 1:
		std::cout << "January";
		break;
	case 2:
		std::cout << "February";
		break;
	case 3:
		std::cout << "March";
		break;
	case 4:
		std::cout << "April";
		break;
	case 5:
		std::cout << "May";
		break;
	case 6:
		std::cout << "June";
		break;
	case 7:
		std::cout << "July";
		break;
	case 8:
		std::cout << "August";
		break;
	case 9:
		std::cout << "September";
		break;
	case 10:
		std::cout << "October";
		break;
	case 11:
		std::cout << "November";
		break;
	case 12:
		std::cout << "December";
		break;
	default:
		std::cout << "Error in DayOfYear::output";
		break;
	}
	std::cout << " " << day;
}

void DayOfYear::input()
{
	std::cout << "Enter month as a number:\n";
	std::cin >> month;
	std::cout << "Enter day of the month:\n";
	std::cin >> day;
}
