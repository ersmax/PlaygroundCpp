/*
Write a complete program that asks the user for a seed and then outputs a list of
ten random numbers based on that seed. The numbers should be floating-point
numbers in the range 0.0 to 1.0 (inclusive).
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main( ) {
    unsigned int seed;
    cout << "Insert seed:";
    cin >> seed;

    srand(seed);
    for (int idx = 0; idx < 10; ++idx) {
        double numb = (RAND_MAX - rand())/static_cast<double>(RAND_MAX);
        cout << numb << "\n";

    }
    cout << endl;
    return 0;
}