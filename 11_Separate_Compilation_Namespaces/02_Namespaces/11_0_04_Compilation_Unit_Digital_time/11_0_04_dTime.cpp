//   This is the implementation file 11_0_04_dTime.cpp of the class DigitalTime.
// The interface for the class DigitalTime is in the header file 11_0_04_dTime.h.

#include <iostream>
#include <cctype>
#include <cstdlib>
#include "11_0_04_dTime.h"

namespace
{
	int digitToInt(const char c)
	{
		return (static_cast<int>(c) - static_cast<int>('0'));
	}

	void readMinute(int& theMinute)
	{
		char c1, c2;
		std::cin >> c1 >> c2;
		if (!(std::isdigit(c1) && std::isdigit(c2)))
		{
			std::cout << "Error: illegal input to readMinute\n";
			std::exit(1);
		}
		theMinute = digitToInt(c1) * 10 + digitToInt(c2);

		if (theMinute < 0 || theMinute > 59)
		{
			std::cout << "Error: illegal input to readMinute\n";
			std::exit(1);
		}
	}
	
	void readHour(int& theHour)
	{
		char c1, c2;
		std::cin >> c1 >> c2;
		if (!(std::isdigit(c1) && (std::isdigit(c2) || c2 == ':')))
		{
			std::cout << "Error: illegal input to readHour\n";
			std::exit(1);
		}
		if (std::isdigit(c1) && c2 == ':')
			theHour = digitToInt(c1);
		else if (std::isdigit(c1) && std::isdigit(c2))
		{
			theHour = digitToInt(c1) * 10 + digitToInt(c2);
			
			std::cin >> c2;
			if (c2 != ':')
			{
				std::cout << "Error: illegal input to readHour\n";
				std::exit(1);
			}
		}

		if (theHour == 24)
			theHour = 0;
		if (theHour < 0 || theHour > 23)
		{
			std::cout << "Error: illegal input to readHour\n";
			std::exit(1);
		}
	}

} // unnamed namespace

namespace myNamespace
{
	DigitalTime::DigitalTime() : hour(0), minute(0)
	{/* Body intentionally left empty */}

	DigitalTime::DigitalTime(const int theHour, const int theMinute)
	{
		if (theHour < 0 || theHour > 59 || theMinute < 0 || theMinute > 59)
		{
			std::cout << "Illegal argument to DigitalTime constructor\n";
			std::exit(1);
		}
		hour = (theHour == 24) ? 0 : theHour;
		minute = theMinute;			
	}

	int DigitalTime::getHour() const { return hour; }

	int DigitalTime::getMinute() const { return minute; }

	void DigitalTime::advance(const int hoursAdded, const int minutesAdded)
	{
		hour = (hour + hoursAdded) % 24;
		advance(minutesAdded);
	}

	void DigitalTime::advance(const int minutesAdded)
	{
		const int grossMinutes = minute + minutesAdded;
		minute = grossMinutes % 60;
		hour = (hour + grossMinutes / 60) % 24;
	}

	bool operator ==(const DigitalTime& time1, const DigitalTime& time2)
	{
		return (time1.hour == time2.hour && time1.minute == time2.minute);
	}

	std::istream& operator >>(std::istream& inputStream, DigitalTime& theObject)
	{
		readHour(theObject.hour);
		readMinute(theObject.minute);
		return inputStream;
	}

	std::ostream& operator <<(std::ostream& outputStream, const DigitalTime& theObject)
	{
		outputStream << theObject.hour << ':';
		if (theObject.minute < 10)
			outputStream << '0';
		outputStream << theObject.minute;
		return outputStream;
	}

} // myNamespace