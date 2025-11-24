/*
What will the following code output?
string s1 = "5";
string s2 = "3";
string s3 = s1 + s2;
cout << s3 << endl;
*/
#include <iostream>
#include <string>
using namespace std;

int main( ) {
    string s1 = "5";
    string s2 = "3";
    string s3 = s1 + s2;

    cout << s3 << endl; // Outputs: 53
    return 0;
}