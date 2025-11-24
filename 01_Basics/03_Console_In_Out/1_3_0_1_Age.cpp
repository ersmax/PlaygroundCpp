// Program to compute the age
#include <iostream>
#include <string>
using namespace std;

int main ( ) {
    string dogName;
    int actualAge;
    int humanAge;

    cout << "How many years old is your dog? " << endl;
    cin >> actualAge;
    humanAge = actualAge * 7;

    cout << "What is your dog's name? " << endl;
    cin >> dogName;

    cout << dogName << " is equivalent to a "
         << humanAge << " years old in human years." << endl;

    return 0;
}
