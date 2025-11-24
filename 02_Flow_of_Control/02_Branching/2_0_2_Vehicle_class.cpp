#include <iostream>
using namespace std;

int main ( ) {
    int vechicleClass;
    double toll;
    cout << "Enter vehicle class:";
    cin >> vechicleClass;

    switch (vechicleClass) {
        case 1:
            cout << "Passenger car";
            toll = 0.50;
            break;
        case 2:
            cout << "Bus";
            toll = 1.50;
            break;
        case 3:
            cout << "Truck";
            toll = 2.50;
            break;
        default:
            cout << "Unknown vehicle class";
    }
    return 0;
}