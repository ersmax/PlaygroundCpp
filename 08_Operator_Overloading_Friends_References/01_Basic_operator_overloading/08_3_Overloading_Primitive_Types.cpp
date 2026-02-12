//Is it possible using operator overloading to change the behavior of + on integers ?
//Why or why not?

// No, because one of the operands of the (binary) operator must be a class.

// Formally:
// When overloading an operator, at least one of the arguments to the operator must
// be of a class type.This prevents changing the behavior of + for integers.

int main( )
{
	return 0;
}