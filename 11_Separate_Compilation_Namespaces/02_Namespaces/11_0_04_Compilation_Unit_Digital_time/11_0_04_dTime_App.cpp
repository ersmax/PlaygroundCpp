//   This is the application file 11_0_04_dTime_App. 
// The program showcases hiding the helping functions
// in an unnamed namespace.

#include <iostream>
#include "11_0_04_dTime.h"

void readHour(int& theHour, int& theMinute);

int main( )
{
	using myNamespace::DigitalTime;
	int theHour, theMinute;
	readHour(theHour, theMinute);

	DigitalTime clock(theHour, theMinute);
	DigitalTime oldClock = clock;
	clock.advance(15);
	if (clock == oldClock)
		std::cout << "Something is wrong\n";
	std::cout << "You entered " << oldClock << '\n';
	std::cout << "15 minutes later the time will be " << clock << '\n';
	clock.advance(2, 15);
	std::cout << "2 hours and 15 min later after that, the time will be: " << clock << '\n';
	
	std::cout << '\n';
	return 0;
}

void readHour(int& theHour, int& theMinute)
{
	char separator;
	do
	{
		std::cout << "Please enter the time (e.g. 20:15)\n";
		std::cin >> theHour >> separator >> theMinute;
	} while (separator != ':');
}
