/*
Consider a quadratic expression, say
x2 − x − 2
Describing where this quadratic is positive (that is, greater than 0) involves
describing a set of numbers that are either less than the smaller root (which is −1)
or greater than the larger root (which is 2). Write a C++ Boolean expression that
is true when this formula has positive values.
*/

/*
My answer:
x < -1 || x > 2
Parentheses are optional due to operator precedence:
The relational operators (`<`, `>`) have higher precedence than the logical OR operator (`||`).
*/


int main() {
	return 0;
}