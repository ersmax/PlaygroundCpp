/*
The following code intends to input a user’s first name, last name, and age.
However, it has an error. Fix the code.
string fullName;
int age;
cout << "Enter your first and last name." << endl;
cin >> fullName;
cout << "Enter your age." << endl;
cin >> age;
cout << "You are " << age << " years old, " << fullName << endl;
*/

#include <iostream>
#include <string>
using namespace std;

int main ( ) {
    string firstName, lastName;
    int age;

    cout << "Enter your first and last name:";
    cin >> firstName >> lastName;   // Fix: Separate first and last names
    cout << "Enter your age:";
    cin >> age;
    cout << "You are " << age << " years old, "
         << firstName << " " << lastName << endl; // Fix: Output both names

    return 0;
}
