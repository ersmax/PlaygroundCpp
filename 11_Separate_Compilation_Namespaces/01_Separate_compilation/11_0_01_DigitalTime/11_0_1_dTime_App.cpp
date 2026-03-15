//   This is the application file 11_0_1_dTime_App.cpp, which demonstrates the use of DigitalTime class
#include <iostream>
#include "11_0_1_dTime.h"

int main( )
{
	DigitalTime clock, oldClock;
	std::cout	<< "You may write midnight as either 0:00 or 24:00\n"
				<< "But I will always write it as 0:00\n"
				<< "Enter the time in 24-hour notation:\n";
	std::cin >> clock;
	oldClock = clock;
	clock.advance(15);
	if (clock == oldClock)
		std::cout << "Something is wrong\n";
	
	std::cout << "You entered " << oldClock << '\n';
	std::cout << "15 minutes later the time will be " << clock << '\n';

	clock.advance(2, 15);
	std::cout << "2 hours and 15 minutes after that the time is " << clock << '\n';

	std::cout << '\n';
	return 0;
}