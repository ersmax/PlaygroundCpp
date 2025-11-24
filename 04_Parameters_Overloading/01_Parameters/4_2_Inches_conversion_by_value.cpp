/*
The following function is supposed to take as arguments a length expressed in
feet and inches and to return the total number of inches in that many feet and
inches. For example, totalInches(1, 2) is supposed to return 14, because
1 foot and 2 inches is the same as 14 inches. Will the following function
perform correctly? If not, why not?
double totalInches(int feet, int inches)
{
inches = 12*feet + inches;
return inches;
}
*/

// Answer: Yes, the function will work correctly.
// Pass by value makes a local copy of the argument inches, so modifying it
// inside the function does not affect the argument passed by the calling function.

// Officially,
//
// The function will work fine. That is the entire answer, but here is some additional
// information: The formal parameter inches is a call-by-value parameter and, as
// discussed in the text, is therefore a local variable. Thus, the value of the argument
// will not be changed.

int main() {
	return 0;
}