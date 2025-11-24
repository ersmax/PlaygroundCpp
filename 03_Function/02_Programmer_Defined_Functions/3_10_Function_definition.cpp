/*
Can a function definition appear inside the body of another function
definition?
*/
// No, a function definition cannot appear inside the body of another function definition.
// A function definition must be at the top level of a file or in a namespace.
// Nesting function definitions is not allowed in C++.
// Alternatively, a function can be declared (function prototype) before it is used,
// and then defined later in the file or in a separate file.
// This allows for better organization and modularity of code.

int main( ) {
	return 0;
}