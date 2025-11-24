/*
What is the output of the following (when embedded in a complete program)?
for (int n = 10; n > 0; n = n − 2)
{
cout << "Hello ";
cout << n << endl;
}
*/
#include <iostream>
using namespace std;

int main ( ) {
    for (int n = 10; n > 0; n = n - 2) {
        cout << "Hello ";
        cout << n << endl;  // Outputs: Hello 10
                            //          Hello 8
                            //          Hello 6
                            //          Hello 4
                            //          Hello 2
    }
    return 0;
}