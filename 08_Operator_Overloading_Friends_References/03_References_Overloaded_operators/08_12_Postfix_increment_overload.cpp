/*
Is the following legal? Explain your answer. 
(The definition of IntPair is given in Display 8.0.6.)
IntPair a(1,2);
(a++)++;
*/

//   The declaration is legal, but the logic is flawed.
// We are increasing with postfix notation the value of `a` with the operator ++.
// However, (a++) returns a new object with the original values of the `a` private variables, 
// and then increase the values of the private variables of `a`.
// Then, (a++)++ increase the value of member variables of the object returned before.
// The end result is that we increase once the value of private variables of `a`,
// and then we increase the values of variables of the object returned with `a++`
// We did not increase the value of members of `a` twice, as we may have expected originally.

// Formally:
// It is legal, but the meaning is not what you might want. (a++) increases the value
// of the member variables in a by one, but(a++)++ raises the value of the member
// variables in a++ by one, and a++ is a different object from a. 
// (It is possible to define the increment operator so that (a++)++ will increase the value of the member
// variables by two but that requires use of the `this` pointer which is not discussed
// until Chapter 10.)


int main( )
{
	return 0;
}