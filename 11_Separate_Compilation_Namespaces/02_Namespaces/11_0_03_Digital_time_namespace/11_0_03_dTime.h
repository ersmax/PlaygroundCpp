//   This is the header file 11_0_03_dTime.h. 
// This is the interface for the class DigitalTime. 
// Values of this type are times of day. 
// The values are input and output in 24-hour, as in 9:30 for 9:30 AM 
// and 14:45 for 2:45 PM.

#ifndef DIGITALTIME_11_0_03_H
#define DIGITALTIME_11_0_03_H

#include <iostream>

namespace myNamespace
{
	class DigitalTime
	{
	public:
		DigitalTime(int theHour, int theMinute);
		DigitalTime();
		//   Postcondition: Initialize the time value to 0:00 (midnight)

		int getHour() const;
		int getMinute() const;
		void advance(int minutesAdded);
		//   Postcondition: Changes the time to minutesAdded minutes later

		void advance(int hoursAdded, int minutesAdded);
		//   Postcondition: Changes the time to hoursAdded hours plus
		// minutesAdded minutes later

		friend bool operator ==(const DigitalTime& time1, const DigitalTime& time2);
		friend std::istream& operator >>(std::istream& inputStream, DigitalTime& theObject);
		friend std::ostream& operator <<(std::ostream& outputStream, const DigitalTime& theObject);

	private:
		int hour;
		int minute;
		static void readHour(int& theHour);
		//   Precondition: Next input to be read from the keyboard is a time in notation, e.g. 9:45 or 14:45
		//   Postcondition: `theHour` has been set to the hour part of the time.
		// The column has been discarded and the next input to be read is the minute.

		static void readMinute(int& theMinute);
		//   Postcondition: Reads the minute from the keyboard after `readHour` has read the hour.

		static int digitToInt(char c);
		//   Precondition: `c` is one of the digits `0` through `9`
		//   Postcondition: Returns the integer for the digit; for example, digit('3') returns 3
	};

} // myNamespace


#endif // DIGITALTIME_11_0_03_H
