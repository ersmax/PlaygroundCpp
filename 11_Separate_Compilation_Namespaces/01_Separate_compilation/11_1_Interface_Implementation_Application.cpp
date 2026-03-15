/*
Suppose that you are defining a class and that you then want to use this class in
a program. You want to separate the class and program parts into separate files as
described in this chapter. State whether each of the following should be placed in
the interface file, implementation file, or application file.
a. The class definition
b. The declaration for a function that is to serve as a class operation but that is
neither a member nor a friend of the class
c. The declaration for an overloaded operator that is to serve as a class operation
but that is neither a member nor a friend of the class
d. The definition for a function that is to serve as a class operation but that is
neither a member nor a friend of the class
e. The definition for a friend function that is to serve as a class operation
f. The definition for a member function
g. The definition for an overloaded operator that is to serve as a class operation
but that is neither a member nor a friend of the class
h. The definition for an overloaded operator that is to serve as a class operation
and that is a friend of the class
i. The main function of your program
*/

// Formally
//   Parts a, b, and c go in the interface file; parts d through h go in the implementation
// file. (All the definitions of class operations of any sort go in the implementation
// file.) Part i(that is, the main part of your program) goes in the application file.


int main()
{
	return 0;
}