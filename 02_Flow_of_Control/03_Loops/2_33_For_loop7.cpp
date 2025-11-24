/*
What is the output of this loop? Comment on the code. (This is not the same
as either of the two previous exercises.)
int n = 1024;
int log = 0;
for (int i = 0; i < n; i = i * 2);
log++;
cout << n << " " << log << endl;
*/
#include <iostream>
using namespace std;

int main ( ) {
    int n = 1024;
    int log = 0;
    for (int i = 0; i < n; i = i * 2); // Infinite loop since i starts at 0 and multiplying by 2 keeps it at 0
        log++;
    cout << n << " " << log << endl; // Outputs: 1024 1
    return 0;
}
// Explanation:
// The loop is intended to double `i` starting from 0 until it reaches `n
// (1024). However, since `i` starts at 0, multiplying it by 2 will always result in 0.
// Therefore, the loop condition `i < n` is always true, leading to an infinite loop.
// The statement `log++` is outside the loop due to the semicolon at the end of the for loop,
// so it executes only once after the loop (which never ends in practice).