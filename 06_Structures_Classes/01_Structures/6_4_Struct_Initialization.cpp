/*
Given the following struct definition:
struct A
{
int b;
int c;
};
declare x to have this structure type. Initialize the members of x, member b and
member c, to the values 1 and 2, respectively.
*/

#include <iostream>

struct A
{
	int b;
	int c;
};

int main( )
{
	A x = {1, 2};
	return 0;
}