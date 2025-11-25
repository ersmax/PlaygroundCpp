#include <iostream>
using namespace std;

int main() {
    string first;
    int second;
    double third;
    char fourth;
    bool fifth;
    float sixth;
    cout << "first: " << first << endl;
    cout << "second: " << second << endl;
    cout << "third: " << third << endl;
    cout << "fourth: " << fourth << endl;
    cout << "fifth: " << fifth << endl;
    cout << "sixth: " << sixth << endl;
    return 0;
}

/*
Output: Random values

This happens because most of the variables in the code are **not initialized**.
In C++, local variables of built-in types
(like `int`, `double`, `char`, `bool`, `float`) have undefined values,
if not explicitly initialized.
Their output depends on whatever data happens to be in memory at their location.

- `string first`: Default-constructed, so it's empty.
- `int second`, `double third`, `char fourth`, `float sixth`: Contain garbage values from memory.
- `bool fifth`: Often zero, but not guaranteed.

This is why we see strange or unpredictable values.
We should aim to always initialize variables before using them.
*/
