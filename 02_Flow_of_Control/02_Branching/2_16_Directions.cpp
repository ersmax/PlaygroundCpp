/*
Given the following declaration and output statement, assume that this has
been embedded in a correct program and is run. What is the output?
enum Direction { N, S, E, W };
// ...
cout << W << " " << E << " " << S << " " << N << endl;
*/
#include <iostream>
using namespace std;

int main ( ) {
    enum Direction { N, S, E, W };
    cout << W << " " << E << " " << S << " " << N << endl; // Outputs: 3 2 1 0
    return 0;
}
