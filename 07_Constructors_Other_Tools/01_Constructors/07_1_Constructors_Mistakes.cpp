/*
Suppose your program contains the following class definition (along with
definitions of the member functions):
class YourClass
{
public:
YourClass(int newInfo, char moreNewInfo);
YourClass( );
void doStuff( );
private:
int information;
char moreInformation;
};
Which of the following are legal?
YourClass anObject(42, 'A');		valid
YourClass anotherObject;			valid
YourClass yetAnotherObject();		X
anObject = YourClass(99, 'B');		valid
anObject = YourClass( );			valid
anObject = YourClass;				X
*/

#include <iostream>

class YourClass
{
public:
	YourClass(int newInfo, char moreNewInfo);
	YourClass();
	void doStuff();
private:
	int information;
	char moreInformation;
};

int main( )
{
	YourClass anObject(42, 'A');	
	YourClass anotherObject;			
	YourClass yetAnotherObject();	// this is a function declaration	
	anObject = YourClass(99, 'B');		
	anObject = YourClass();
	// anObject = YourClass;		// ILLEGAL

	std::cout << "\n";
	return 0;
}

YourClass::YourClass()
{}

YourClass::YourClass(int newInfo, char moreNewInfo) 
					: information(newInfo), moreInformation(moreNewInfo)
{}


