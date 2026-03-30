/*
You know that an overloaded assignment operator and a copy constructor
are not inherited.Does this mean that if you do not define an overloaded
assignment operator or a copy constructor for a derived class, then that derived
class will have no assignment operator and no copy constructor ?
*/


//  Wrong. The default copy constructor and default assignment operator will be used
// in the derived class, which means that a shallow copy of elements will be done
// in place of a deep copy in case of dynamic memory allocation operations 
// (a simple copy of the content of member elements instead of the elements pointed do).

// Formally:
//  No.If you do not define an overloaded assignment operator or a copy constructor
// for a derived class, then a default assignment operator and a default copy constructor
// will be defined for the derived class.However, if the class involves pointers, dynamic
// arrays, or other dynamic data, then it is almost certain that neither the default assignment
// operator nor the default copy constructor will behave as you want them to.

int main()
{
	return 0;
}