//   This is the implementation file 11_5_dTime.cpp of the class DigitalTime.
// The interface for the class DigitalTime is in the header file 11_5_dTime.h

#include <iostream>
#include <cctype>
#include <cstdlib>			
#include "11_5_dTime.h"

constexpr int MINUTES = 60;

DigitalTime::DigitalTime(const int theHour, const int theMinute)
{
	if (theHour < 0 || theHour > 24 || theMinute < 0 || theMinute > 59)
	{
		std::cout << "Illegal argument to DigitalTime constructor\n";
		std::exit(1);
	}
	if (theHour == 24 && theMinute == 0)
		minute = 0;
	else
		minute = theHour * MINUTES + theMinute;
}

DigitalTime::DigitalTime() : minute(0) 
{ /* Body intentionally left empty */ }

int DigitalTime::getHour() const { return minute / 60; }

int DigitalTime::getMinute() const { return minute % 60; }

void DigitalTime::advance(const int minutesAdded)
{
	minute += minutesAdded;
}

void DigitalTime::advance(const int hoursAdded, const int minutesAdded)
{
	minute += (hoursAdded * MINUTES);
	advance(minutesAdded);
}

bool operator ==(const DigitalTime& time1, const DigitalTime& time2)
{
	return (time1.minute == time2.minute);
}

std::ostream& operator <<(std::ostream& outputStream, const DigitalTime& theObject)
{
	outputStream << theObject.minute << " is equivalent to: ";
	outputStream << theObject.minute / 60 << ':';
	if (theObject.minute % 60 < 10)
		outputStream << '0';
	outputStream << theObject.minute % 60;
	return outputStream;
}

std::istream& operator >>(std::istream& inputStream, DigitalTime& theObject)
{
	DigitalTime::readHour(theObject.minute);
	DigitalTime::readMinute(theObject.minute);
	return inputStream;
}

int DigitalTime::digitToInt(const char c)
{
	return (static_cast<int>(c) - static_cast<int>('0'));
}

void DigitalTime::readHour(int& theHour)
{
	char c1, c2;
	std::cin >> c1 >> c2;
	if (!(std::isdigit(c1) && std::isdigit(c2) || c2  == ':'))
	{
		std::cout << "Error: illegal input to readHour\n";
		std::exit(1);
	}

	if (isdigit(c1) && c2 == ':')
		theHour = digitToInt(c1);
	else if (std::isdigit(c1) && std::isdigit(c2))
	{
		theHour = digitToInt(c1) * 10 + digitToInt(c2);
		std::cin >> c2;		// Now read `:`
		if (c2 != ':')
		{
			std::cout << "Error: illegal input to readHour\n";
			std::exit(1);
		}
	}
	if (theHour < 0 || theHour > 23)
	{
		std::cout << "Error: illegal input to readHour\n";
		std::exit(1);
	}
	theHour *= MINUTES;
}

void DigitalTime::readMinute(int& theMinute)
{
	char c1, c2;
	std::cin >> c1 >> c2;

	if (!(std::isdigit(c1) && std::isdigit(c2)))
	{
		std::cout << "Error: illegal input to readMinute\n";
		std::exit(1);
	}
	const int newMinutes = digitToInt(c1) * 10 + digitToInt(c2);

	if (newMinutes < 0 || newMinutes > 59)
	{
		std::cout << "Error: illegal input to readMinute\n";
		std::exit(1);
	}

	theMinute += newMinutes;
}
