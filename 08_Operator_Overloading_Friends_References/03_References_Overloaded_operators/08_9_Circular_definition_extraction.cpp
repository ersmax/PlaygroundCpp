/*
In Display 8.0.5, the definition of the overloaded operator << contains lines like
the following :
outputStream << "$-";
Is this not circular ? Are we not defining << in terms of << ?
*/

//   Short answer: No, because << is defined in the standard library iostream.
//   Long answer: outputStream is of type ostream, and "$-" is of type std::string.
// Hence, the function << of the standard library applies in this specific case.
// Therefore, our overloaded function of the insertion operator is not defined circularly, 
// because the first parameter is the same (type ostream), but the second parameter is of type Money,
// not std::string as in the standard library.

// Formally:
//   To understand why it is not circular, you need to think about the basic message of
// overloading : A single function or operator name can have two or more definitions.
// That means that two or more different operators(or functions) can share a single
// name.In the line
//    outputStream << "$-";
// the operator << is the name of an operator defined in the library iostream to be
// used when the second argument is a quoted string.The operator named << that we
// define in Display 8.5 is a different operator that works when the second argument
// is of type Money.


int main( )
{
	return 0;
}