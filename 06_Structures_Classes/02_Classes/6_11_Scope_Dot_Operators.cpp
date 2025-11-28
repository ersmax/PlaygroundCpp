/*
 *Carefully distinguish between the meaning and use of the dot operator and the
scope resolution operator, ::.
*/

//   Dot operator is used by class variables (or loosely speaking objects)
// to access the member variables or member functions of a class.
//   Scope resolution operator is used to tell that a member function is a 
// member of, and it is used with a class name typically in the function 
// definition of a class member function.

// Formally:
//   Both the dot operator and the scope resolution operator are used with member
// names to specify of what class or structure the member name is a member.If
// class DayOfYear is as defined in Display 6.0.3 and today is an object of the
// class DayOfYear, then the member month may be accessed with the dot operator :
// today.month. When we give the definition of a member function, the scope
// resolution operator is used to tell the compiler that this function is the one
// declared in the class.

int main( )
{
	return 0;
}