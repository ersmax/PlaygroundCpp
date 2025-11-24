/*
Though we urge you not to program using this style, we are providing an
exercise that uses nested blocks to help you understand the scope rules. State
the output that this code fragment would produce if embedded in an otherwise
complete, correct program.
{
int x = 1;
cout << x << endl;
{
cout << x << endl;
int x = 2;
cout << x << endl;
{
cout << x << endl;
int x = 3;
cout << x << endl;
}
cout << x << endl;
}
cout << x << endl;
}
*/
#include <iostream>
using namespace std;

int main( ) {
    int x = 1;
    cout << x << endl;              // x = 1
    {
        cout << x << endl;          // x = 1
        int x = 2;
        cout << x << endl;              // x = 2
        {
            cout << x << endl;          // x = 2
            int x = 3;
            cout << x << endl;              // x = 3
        }
        cout << x << endl;              // x = 2
    }
    cout << x << endl;              // x = 1
}