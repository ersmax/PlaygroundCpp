/*
Suppose you define a function with a parameter of type PFArrayD. Can you
plug in an object of the class PFArrayDBak as an argument for this function?
*/

//   Yes it is possible. This is because an object of a derived class is still
// an object of the base class, due to the "Is a" relationship.
// The parameter of type PFArrayDBak plugged in is upcast to PFArrayD (base class)

// Formally:
// Yes.An object of a derived class is also an object of its base class.A PFArrayDBak
// is a PFArrayD.

int main( )
{
	return 0;
}