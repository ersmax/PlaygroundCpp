/*
What is the output of this loop? Identify the connection between the value of n
and the value of the variable log.
int n = 1024;
int log = 0;
for (int i = 1; i < n; i = i * 2)
log++;
cout << n << " " << log << endl;
*/
#include <iostream>
using namespace std;

int main ( ) {
    int n = 1024;
    int log = 0;
    for (int i = 1; i < n; i = i * 2)
        log++;
    cout << n << " " << log << endl;
    return 0;
}
// Output: 1024 10
// Explanation: The loop starts with i = 1 and repeatedly doubles i (i = i * 2)
// until i is no longer less than n (1024). The variable log is incremented
// each time the loop executes. The values of i during the loop are:
// 1, 2, 4, 8, 16, 32, 64, 128, 256, 512.
// When i becomes 1024, the loop condition (i < n) is false, so the loop stops.
// The loop runs 10 times, so log is 10 at the end.
// The connection between n and log is that log represents the exponent
// such that 2 raised to that exponent is less than n. In this case,
// 2^10 = 1024, so log is 10.