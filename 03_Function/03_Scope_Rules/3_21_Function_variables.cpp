/*
Suppose a function named function1 has a variable named sam declared
within the definition of function1, and a function named function2 also
has a variable named sam declared within the definition of function2. Will
the program compile (assuming everything else is correct)? If the program will
compile, will it run (assuming that everything else is correct)? If it runs, will it
generate an error message when run (assuming everything else is correct)? If it
runs and does not produce an error message when run, will it give the correct
output (assuming everything else is correct)?
*/

// Yes, the program will compile, run, and give the correct output.
// The variables named 'sam' in function1 and function2 are local to their respective functions
// and do not interfere with each other. Each function has its own scope, so the same
// variable name can be used without a conflict.

int main() {
	return 0;
}