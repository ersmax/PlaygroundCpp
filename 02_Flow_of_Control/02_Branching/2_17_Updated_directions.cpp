/*
Given the following declaration and output statement, assume that this has
been embedded in a correct program and is run. What is the output?
enum Direction { N = 5, S = 7, E = 1, W };
// ...
cout << W << " " << E << " " << S << " " << N << endl;
*/
#include <iostream>
using namespace std;

int main ( ) {
    enum Direction { N = 5, S = 7, E = 1, W };
    Direction d = Direction::W;
    cout << W << " " << E << " " << S << " " << N << endl; // Outputs: 2 1 7 5
    cout << d << endl;
    return 0;
}
