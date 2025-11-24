/*
Determine the value, true or false, of each of the following Boolean
expressions, assuming that the value of the variable count is 0 and the value of
the variable limit is 10. Give your answer as one of the values true or false.
a. (count = = 0) && (limit < 20)
b. count = = 0 && limit < 20
c. (limit > 20) || (count < 5)
d. !(count = = 12)
e. (count = = 1) && (x < y)
f. (count < 10) || (x < y)
g. !( ((count < 10) || (x < y)) && (count >= 0) )
h. ((limit / count) > 7) || (limit < 20)
i. (limit < 20) || ((limit / count) > 7)
j. ((limit / count) > 7) && (limit < 0)
k. (limit < 0) && ((limit / count) > 7)
l. (5 && 7) + (!6)
*/
#include <iostream>
using namespace std;

int main ( ) {
    int count = 0;
    int limit = 10;
    int x = 5;
    int y = 10;

    bool a = (count == 0) && (limit < 20);                  // true
    bool b = count == 0 && limit < 20;                      // true
    bool c = (limit > 20) || (count < 5);                   // true
    bool d = !(count == 12);                                // true
    bool e = (count == 1) && (x < y);                       // false
    bool f = (count < 10) || (x < y);                       // true
    bool g = !(((count < 10) || (x < y)) && (count >= 0));  // false
    // bool h = ((limit / count) > 7) || (limit < 20);      // Undefined behavior (division by zero)
    bool i = (limit < 20) || ((limit / count) > 7);         // true - short circuit
    // bool j = ((limit / count) > 7) && (limit < 0);       // Undefined behavior (division by zero)
    bool k = (limit < 0) && ((limit / count) > 7);          // false - short circuit
    bool l = (5 && 7) + (!6);   // (5 && 7) is true (1), and (!6) is false (0), result is 1 + 0 = 1

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
    cout << "e: " << e << endl;
    cout << "f: " << f << endl;
    cout << "g: " << g << endl;
    // cout << "h: " << h << endl; // runtime error
    cout << "i: " << i << endl;
    // cout << "j: " << j << endl; // runtime error
    cout << "k: " << k << endl;
    cout << "l: " << l << endl;

    return 0;
}

