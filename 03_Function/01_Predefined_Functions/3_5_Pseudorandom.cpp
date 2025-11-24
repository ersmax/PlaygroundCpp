/*
Give an expression to produce a pseudorandom integer number in the range 5 to
10 (inclusive).
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ( ) {
    srand(static_cast<unsigned int>(time(0))); // seed the random number generator
    for (int idx = 0; idx < 5; ++idx) {
        int randomN = (rand() % 6) + 5;
        cout << randomN << endl;
    }
    return 0;
}