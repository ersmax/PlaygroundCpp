//
// Created by admin on 07/09/2025.
//
#include <iostream>
using namespace std;

int main() {
    // This program greets the user
    int numberOfLanguages;

    cout << "Hello reader.\n"
         << "Welcome to C++.\n";

    cout << "How many programming languages have you used?";
    cin >> numberOfLanguages;

    if (numberOfLanguages < 1)
        cout << "Welcome to C++.\n";
    else
        cout << "Congrats to your new learning.\n";

    return 0;
}