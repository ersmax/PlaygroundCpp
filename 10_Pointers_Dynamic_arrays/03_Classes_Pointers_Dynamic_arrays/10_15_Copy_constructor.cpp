/*
The following is the first line of the copy constructor definition for the
class PFArrayD. The identifier PFArrayD occurs three times and means
something slightly different each time. What does it mean in each of the
three cases?
PFArrayD::PFArrayD(const PFArrayD& pfaObject)
*/

// PFArrayD::		this refers to the class
// ::PFArrayD		this refers to the constructor
// const PFArrayD&	this refers to the type of parameter pass as const reference to copy

// Formally:
// The PFArrayD before the::is the name of the class.The PFArrayD right after the
// :: is the name of the member function. (Remember, a constructor is a member
// function that has the same name as the class.) The PFArrayD inside the parentheses
// is the type for the parameter pfaObject.

int main()
{
	return 0;
}