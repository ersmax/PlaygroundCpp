/*
Here is an initialization of a structure type. State what happens with each
initialization. Note any problems with these initializations.
struct Date
{
int month;
int day;
int year;
};
a. Date dueDate = {12, 21};
b. Date dueDate = {12, 21, 1995};
c. Date dueDate = {12, 21, 19, 95};
*/

// a. month = 12; day = 21; year = 0, because member variables
//	  without initialization are initialized with 0 of base type
// b. month = 12; day = 21; year = 1995
// c. ERROR: too many initializers

int main( )
{
	return 0;
}