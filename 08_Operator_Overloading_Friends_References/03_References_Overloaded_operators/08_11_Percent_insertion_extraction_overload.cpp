/*
Following is the definition for a class called Percent.Objects of type Percent
represent percentages such as 10 % or 99 % .Give the definitions of the overloaded
operators >> and << so that they can be used for input and output with objects
of the class Percent.Assume that input always consists of an integer followed
by the character '%', such as 25 % .All percentages are whole numbers and are
stored in the int member variable named value.You do not need to define
the other overloaded operators and do not need to define the constructor.You
only have to define the overloaded operators >> and << .
*/

#include <iostream>

class Percent
{
public:
	Percent() {};
	Percent(const int number) : value(number) {};
	//friend bool operator ==(const Percent& first, const Percent& second);
	//friend bool operator <(const Percent& first, const Percent& second);
	friend std::istream& operator >>(std::istream& inputStream, Percent& aPercent);
	friend std::ostream& operator <<(std::ostream& outputStream, const Percent& aPercent);
private:
	int value;
};

int main( )
{
	Percent aPercent;
	std::cout << "Enter a percent value:\n";
	std::cin >> aPercent;
	std::cout << "The value is " << aPercent << '\n';
	return 0;
}

std::istream& operator >>(std::istream& inputStream, Percent& aPercent)
{
	int percentage;
	char percentageSign;
	// chain of input operators >> is evaluated left to right.
	// extraction operator >> returns a reference to the stream 
	// (std::istream&), allowing the next operation to use that same stream.
	inputStream >> percentage >> percentageSign;
	if (percentage < 0 || percentageSign != '%')
	{
		std::cout << "Not valid percentage\n";
		std::exit(-1);
	}
	aPercent.value = percentage;
	return inputStream;
}

/*	or simply:
 *	
 *	std::istream& operator >>(std::istream& inputStream, Percent& aPercent) 
 *	{
 *		char percentSign;
 *		inputStream >> aPercent.value;
 *		inputStream >> percentSign;
 *		return inputStream;
 *	}
 */

std::ostream& operator <<(std::ostream& outputStream, const Percent& aPercent)
{
	outputStream << aPercent.value << "%";
	return outputStream;
}