/*
If you use a variable in a function definition, where should you declare the
variable? In the function definition? In the main function? Any place that is
convenient?
*/
// Answer: You should declare the variable in the body of the function definition
// if it is only used within that function.
// If the variable needs to be accessed by multiple functions,
// consider passing it as a parameter or declaring it in a broader scope,
// such as globally or in the main function, depending on your program's design and requirements.
// Generally speaking, it is best to avoid global variables when possible.

int main() {
	return 0;
}