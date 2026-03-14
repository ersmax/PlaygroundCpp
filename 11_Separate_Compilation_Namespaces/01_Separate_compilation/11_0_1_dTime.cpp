//   This is the implementation file 11_0_1_dTime.cpp of the class DigitalTime.
// The interface for the class DigitalTime is in the header file 11_0_1_dTime.h

#include <iostream>
#include <cctype>
#include <cstdlib>			
#include "11_0_1_dTime.h"

DigitalTime::DigitalTime(const int theHour, const int theMinute)
{
	if (theHour < 0 || theHour > 24 || theMinute < 0 || theMinute > 59)
	{
		std::cout << "Illegal argument to DigitalTime constructor\n";
		std::exit(1);
	}
	hour = theHour;
	minute = theMinute;
	
	// Standardize midnight as 0:00
	if (hour == 24)	hour = 0;
}

DigitalTime::DigitalTime() : hour(0), minute(0) 
{ /* Body intentionally left empty */ }

int DigitalTime::getHour() const { return hour; }

int DigitalTime::getMinute() const { return minute; }

void DigitalTime::advance(const int minutesAdded)
{
	const int grossMinutes = minute + minutesAdded;
	minute = grossMinutes % 60;
	const int hourAdjustment = grossMinutes / 60;
	hour = (hour + hourAdjustment) % 24;
}

void DigitalTime::advance(const int hoursAdded, const int minutesAdded)
{
	hour = (hour + hoursAdded) % 24;
	advance(minutesAdded);
}
