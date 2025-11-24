/*
What is the output of this loop? Comment on the code. (This is not the same
as the previous exercise.)
int n = 1024;
int log = 0;
for (int i = 1; i < n; i = i * 2);
log++;
cout << n << " " << log << endl;
*/
#include <iostream>
using namespace std;

int main ( ) {
    int n = 1024;
    int log = 0;
    for (int i = 1; i < n; i = i * 2);
        log++;
    cout << n << " " << log << endl;
}
// Output: 1024 1
// This is due to the empty statement or the null statement.
// Explanation: The for loop iterates with `i` starting at 1 and doubling each
// time until it is no longer less than `n` (1024). However, there is a semicolon
// immediately after the for loop declaration, which means the loop body is empty.
// As a result, the loop runs until `i` reaches 1024, but does not execute any
// statements during the iterations. After the loop completes, `log` is incremented
// by 1 exactly once, resulting in `log` being 1. Finally, the program outputs
// "1024 1".