#include <iostream>
#include <cstdlib>
using namespace std;

int main ( ) {
    int day, month;
    char answer;
    cout << "Welcome to weather forecast.\n";

    do {
        cout << "Please insert the day and month (separated by space):";
        cin >> day >> month;

        srand(day * month);
        int prediction = rand( ) % 3;

        cout << "Today is: ";
        switch (prediction) {
            case 0:
                cout << "Today is sunny.\n";
                break;
            case 1:
                cout  << "Today is cloudy.\n";
                break;
            case 2:
                cout << "Today is raining.\n";
                break;
            default:
                cout << "Error.\n";
                break;
        }
        cout << "Do you want to insert another day?";
        cin >> answer;
    } while (answer == 'Y' || answer == 'y');

    cout << "Goodbye.\n";

    return 0;
}