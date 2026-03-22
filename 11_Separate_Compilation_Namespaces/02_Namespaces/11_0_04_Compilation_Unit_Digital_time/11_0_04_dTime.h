//   This is the header file 11_0_04_dTime.h. This is the application interface for the class
// DigitalTime. Values of this type are times of day. The values are input and output in
// 24-hour notation, as in 9:30 for 9:30 AM and 14:45 for 2:45 PM.


#ifndef DTIME_H_11_0_04
#define DTIME_H_11_0_04

#include <iostream>

namespace myNamespace
{
	class DigitalTime
	{
	public:
		DigitalTime();	
		// Initialize the time value to 0:00 (midnight)

		DigitalTime(int theHour, int theMinute);
		int getHour() const;
		int getMinute() const;
		void advance(int minutesAdded);
		//   Postcondition: changes the time to minutesAdded minutes later

		void advance(int hoursAdded, int minutesAdded);
		//   Postcondition: changes the time to hoursAdded hours 
		// plus minutesAdded minutes later

		friend bool operator ==(const DigitalTime& time1, const DigitalTime& time2);
		friend std::istream& operator >>(std::istream& inputStream, DigitalTime& theObject);
		friend std::ostream& operator <<(std::ostream& outputStream, const DigitalTime& theObject);
	private:
		int hour;
		int minute;
	};
} // myNamespace


#endif // 11_0_04_DTIME_H

