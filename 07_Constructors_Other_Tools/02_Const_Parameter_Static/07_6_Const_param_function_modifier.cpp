/*
Consider the following definitions below.
Each of the three const keywords is a promise to the compiler that the compiler
will enforce. What is the promise in each case?
*/

// Formally:
// In const int x = 17; , the const keyword promises the compiler that code written
// by the author will not change the value of x.
// In the int f() const; declaration, the const keyword is a promise to the
// compiler that code written by the author to implement function f will not change
// anything in the calling object.
// In int g(const A& x); , the const keyword is a promise to the compiler that
// code written by the class author will not change the argument plugged in for x.

#include <iostream>

const int x = 17;		// global variable that doesn't change
class A
{
public:
	A( );
	A(int n);
	int f() const;		// member function doesn't change the calling object value
	int g(const A& x);	// the const reference parameter doesn't change the parameter
private:
	int i;
};

int main( )
{
	return 0;
}