/*
Does your compiler allow void main( ) and int main( )? What warnings
are issued if you have int main( ) and do not supply a return 0; statement?
To find out, write several small test programs and perhaps ask your instructor
or a local guru.
*/

// Answer: Most modern C++ compilers allow both `int main()` without return, but for the
// sake of portability, we should include it, because not all compilers allow the omission,
// even though C++ standard says that you can omit the return 0.
// Using `void main()` is not standard-compliant and may lead to undefined behavior in some environments.
// In fact, CLion does not start the program if we use `void main()`:
// it gives a compilation error saying "main must return int".
// If we use `int main()` and do not supply a `return 0;` statement, some compilers
// may issue a warning indicating that the control reaches the end of a non-void function.
// This does not happen with CLion for example, because it assumes C++11 or later,
// where reaching the end of `main` without a return statement is equivalent to returning 0.
// Yet, practically speaking, it is not optional to odmit`return 0;` at the end of `main`.
// This indicates successful completion of the program in fact.


#include <iostream>
using namespace std;

void testVoidMain( ) {
    // This is not a proper main function, just a test function
    // In fact, the System calls main( ) to start the program
    cout << "This is a test function with void return type.\n";
}

int main( ) {
    testVoidMain( );
    cout << "This is the main function with int return type.\n";
    // Note: If you omit 'return 0;' some compilers may issue a warning
    // indicating that the control reaches the end of a non-void function.
    // return 0;
}
