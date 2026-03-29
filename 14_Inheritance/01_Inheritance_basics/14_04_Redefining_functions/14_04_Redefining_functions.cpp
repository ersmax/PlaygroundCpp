//   The class SalariedEmployee inherits both of the functions getName and
// printCheck(among other things) from the base class Employee, yet only the
// function declaration for the function printCheck is given in the definition
// of the class SalariedEmployee.Why isn’t the function declaration for the
// function getName given in the definition of SalariedEmployee ?

//   The declaration of getName() is not given in the derived class
// SalariedEmployee because there is no redefinition of such function.
// The function declared and defined in the base class Employee will be used.

// Formally:
//   The declaration for the function getName is not given in the definition of
// SalariedEmployee because it is not redefined in the class SalariedEmployee.
// It is inherited unchanged from the base class Employee.

int main( )
{
	return 0;
}