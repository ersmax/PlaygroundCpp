/*
What unfortunate misinterpretation can occur with the following declaration ?
int* intPtr1, intPtr2;
*/

// intPtr2 is interpreted as a pointer to a variable of type integer, 
// when in reality intPtr2 is a variable of type integer itself.

// Formally:
/*
To the unwary or to the neophyte, this looks like two objects of type pointer to
int, that is, int*. Unfortunately, the * binds to the identifier, not to the type (that
is, not to the int). The result is that this declaration declares intPtr1 to be an int
pointer, while intPtr2 is an ordinary int variable.
*/

int main( )
{
	return 0;
}