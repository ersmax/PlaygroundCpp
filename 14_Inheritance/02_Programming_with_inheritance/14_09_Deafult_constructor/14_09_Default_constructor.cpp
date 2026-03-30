/* 
Is the following alternative definition of the default constructor for the class
PFArrayDBak legal ? (The invocation of the constructor from the base class has been omitted.) 
Explain your answer.
PFArrayDBak::PFArrayDBak() : usedB(0)
{
	b = new double[capacity];
}
*/

//   It is legal because the default constructor of the base class will be used
// to assign the values of the inherited member variables.

// Formally:
//   Yes, it is legal and has the same meaning as the definition given with:
// PFArrayDBack::PFArrayDBack() : PFArrayD(), usedB(0)
// {
//		arrayB = new double[capacity];
// }
// If no base class constructor is called, then the default constructor for the base class
// is called automatically.


int main( )
{
	return 0;
}

