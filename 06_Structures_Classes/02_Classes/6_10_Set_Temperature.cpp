/*
Given the following class definition, write an appropriate definition for the
member function set.
class Temperature
{
public:
void set(double newDegrees, char newScale);
//Sets the member variables to the values given as
//arguments.
double degrees;
char scale; //'F' for Fahrenheit or 'C' for Celsius.
};
*/

#include <iostream>

class Temperature
{
public:
	void set(double newDegrees, char newScale);
	//   Postcondition: sets the member variables to the values 
	// passed as arguments to the called function
	double degrees;
	char scale;		// F: Fahrenheit, C: Celsius
};

int main( )
{
	Temperature today;
	today.set(20, 'F');
	std::cout << today.degrees << " " << today.scale << "\n";
	std::cout << "\n";
	return 0;
}

void Temperature::set(const double newDegrees, const char newScale)
{
	degrees = newDegrees;
	scale = newScale;
}
