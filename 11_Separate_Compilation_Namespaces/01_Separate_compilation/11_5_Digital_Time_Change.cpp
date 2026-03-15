/*
 Suppose you want to change the implementation of the class DigitalTime given
in Displays 11.1 and 11.2. Specifically, you want to change the way the time is
recorded. Instead of using the two private variables hour and minute, you want
to use a single (private) int variable, which will be called minutes. In this new
implementation the private variable minutes will record the time as the number
of minutes since the time 0:00 (that is, since midnight). For example, 1:30 is
recorded as 90 minutes, since it is 90 minutes past midnight. Describe how you
need to change the interface and implementation files shown in Displays 11.1
and 11.2. You need not write out the files in their entirety; just indicate what
items you need to change and how, in a very general way, you would change
them.
*/



/*
 Main differences between 11_0_01_dTime.cpp and 11_5_dTime.cpp:

 1) Representation
	- 11_0_01_dTime uses two private members, hour and minute, to store the
	  current time directly as "HH:MM".
	- 11_5_dTime uses a single private int, minute, which stores the number of
	  minutes since midnight (0..1439). All operations interpret and update this
	  single value.

 2) Constructors
	- 11_0_01_dTime validates hour and minute separately, then stores them
	  directly in the two data members, and converts 24:00 to 0:00.
	- 11_5_dTime still validates the hour and minute, but converts the pair
	  (hour, minute) into a single count of minutes: minute = hour * 60 + minute,
	  with 24:00 again standardized to 0.

 3) Accessors
	- 11_0_01_dTime::getHour and getMinute simply return the stored hour and
	  minute fields.
	- 11_5_dTime::getHour and getMinute derive hour and minute from the
	  stored minute count using integer division and modulo.

 4) advance functions
	- In 11_0_01_dTime, advance(minutesAdded) adjusts the minute field, then
	  carries any overflow into hour and wraps hour modulo 24. The two-argument
	  advance adds hours to the hour field and then calls the one-argument
	  advance.
	- In 11_5_dTime, both advance overloads work directly on the total minutes:
	  the one-argument version adds minutesAdded to minute, and the two-argument
	  version adds hoursAdded * 60 and then calls the one-argument version.

 5) Equality and stream operators
	- In 11_0_01_dTime, operator== compares hour and minute separately; the
	  stream insertion operator prints "hour:minute" in 24-hour format; and the
	  extraction operator reads into the hour and minute fields via readHour and
	  readMinute.
	- In 11_5_dTime, operator== compares the single minute field; the insertion
	  operator first prints the internal minute value and then the equivalent
	  "HH:MM" form; and the extraction operator reads hours and minutes into
	  temporary variables, then converts them into the internal minute count.

 6) readHour and readMinute
	- The parsing logic (reading digits and a colon) is essentially the same in
	  both versions, but in 11_0_01_dTime the results are stored directly as hour
	  and minute, while in 11_5_dTime they are later combined into a single
	  value representing minutes since midnight.

7) insertion and extraction operators
    - The insertion operator << now takes the modulo of the minute private variable by the 
	  total minutes over the day (24 * 60) to get the hour and minutes. 
	  This is done to avoid printing times greater than 24:00, which would be confusing. 
	  For example, if the internal minute value is 1500, it will print "1500 is equivalent to: 1:00" instead of "25:00".
	  It also prints the internal minute value before the equivalent "HH:MM" form.
*/

int main( )
{
	return 0;
}