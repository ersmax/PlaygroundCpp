/*
Predict the output of the following nested loops:
int n, m;
for (n = 1; n <= 10; n++)
    for (m = 10; m >= 1; m- -)
cout << n << " times " << m
     << " = " << n * m << endl;
*/
#include <iostream>
using namespace std;

int main ( ) {
    int n, m;
    for (n = 1; n <= 10; n++)
        for (m = 10; m >= 1; m--)
            cout << n << " times " << m
                 << " = " << n * m << endl;
    return 0;
}
// Output:
// 1 times 10 = 10
// 1 times 9 = 9
// ...
// 10 times 10 = 100
// ...
// 10 times 1 = 10
