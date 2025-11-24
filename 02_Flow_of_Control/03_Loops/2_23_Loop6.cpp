/*
What output would be produced in the previous exercise if the > sign were
replaced with < ?
*/
#include <iostream>
using namespace std;

int main ( ) {
    int x = 10;
    while (x < 0) {
        cout << x << endl;
        x = x - 3;
    }
    return 0;
}

// // Output: No output