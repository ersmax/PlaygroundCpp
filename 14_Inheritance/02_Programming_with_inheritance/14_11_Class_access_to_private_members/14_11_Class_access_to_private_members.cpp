/*
Would the following be legal for the definition of a member function to add
to the class Employee (Display 14.1)? (Remember, the question is whether it is
legal, not whether it is sensible.)

void Employee::doStuff( )
{
	Employee object("Joe", "123-45-6789");
	cout << "Hello " << object.name << endl;
}

*/

//   It makes sense. This is because a class has access 
// to private members of all objects of the class.

// Formally:
//   Yes, it is legal.One reason you might think it illegal is that name is a private member
// variable.However, object is in the class Employee, which is the class that is
// being defined, so we have access to all member variables of all objects of the class
// Employee.

int main( )
{
	return 0;
}
