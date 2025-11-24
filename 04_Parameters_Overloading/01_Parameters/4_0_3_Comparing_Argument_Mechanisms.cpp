// Illustrates the difference between a call-by-value
// parameter and a call-by-reference parameter
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void doStuff(int par1Value, int& par2Ref);
// Precondition: par1Value is a call-by-value parameter,
//               par2Ref is a call-by-reference parameter
// Postcondition: change the value and observe how arguments
//                change value in the main

int main( ) {
    int n1 = 1, n2 = 2;

    cout << "n1 before function call = " << n1 << endl;
    cout << "n2 before function call = " << n2 << endl;
    doStuff(n1, n2);
    cout << "n1 after function call = " << n1
         << " (remains same)\n";
    cout << "n2 after function call = " << n2
         << " (changed)\n";

    return 0;
}

void doStuff(int par1Value, int& par2Ref) {
    par1Value = 111;
    par2Ref = 222;
    cout << "par1Value in function call = "
         << par1Value << endl;
    cout << "par2Value in function call = "
         << par2Ref << endl;
}
