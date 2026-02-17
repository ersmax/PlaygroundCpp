//Why can we not overload << or >> as member operators ?

// Because if we did, we would not be able to use them the way we intend to.
// This is because the first member (the calling object) is an Abstract Data Type (i.e. a class),
// and not of type iostream, as opposed to overloading the insertion of extraction
// as non-member non friend functions, or non-member friend functions.

// Formally:
// If << and >> are to work as we want, then the first operand(first argument) must
// be cout or cin(or some file I / O stream).But if we want to overload the operators
// as members of, say, the class Money, then the first operand would have to be the
// calling object and so would have to be of type Money, and that is not what we want.

int main( )
{
	std::cout << '\n';
	return 0;
}