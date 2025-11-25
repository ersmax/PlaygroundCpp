//
// Test ground
//
#include <string>
#include <iostream>
using namespace std;

int main() {
    string fruit;
    fruit = "durian";
    string s = R"(\t\\t\n)";
    cout << s << endl;
    // integer division
    cout << 10/3 << endl;
    // static cast
    int n = 2, m = 4;
    double result = n/static_cast<double>(m);
    cout << result;
    return 0;
}




