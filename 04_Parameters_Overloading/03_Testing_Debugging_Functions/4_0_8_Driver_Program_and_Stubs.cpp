// Driver Program is a program that calls other functions to test their functionality.
// Stubs are simplified versions of functions that simulate their behavior for testing purposes.

// #define NDEBUG   // uncomment this line to enable assertions
#include <iostream>
#include <cassert>
#include <iomanip>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::ios;
using std::fixed;
using std::showpoint;
using std::setprecision;
using std::acos;

void getData(int& diameter, double& price);
// A stub. The final function must be written.

void giveResults(int diameter, double price);
// A stub. The final function must be written.

double unitPrice(int diameter, double price);
// Precondition: diameter and price are greater than 0
// Postcondition: Returns the price per square inch of a pizza

int main( ) {
    int diameter;
    double price;
    char ans;

    do {
        getData(diameter, price);
        giveResults(diameter, price);

        cout << "Test again (y/Y)?";
        cin >> ans;

    } while (ans == 'y' || ans == 'Y');

    cout << endl;
    return 0;
}

void getData(int& diameter, double& price) {
    // Stub implementation
    diameter = 10, price  = 15.99;
}

void giveResults(int diameter, double price) {
    // Stub implementation
    assert((diameter > 0) && (price > 0) && "Diameter and price must be greater than 0.");
    double unit_price = unitPrice(diameter, price);
    cout << fixed << showpoint << setprecision(2);
    cout << "Unit price (price per square inch): $" << unit_price << endl;
}

double unitPrice(int diameter, double price) {
    const double PI = acos(-1.0);
    double radius = diameter / static_cast<double>(2);
    double area = PI * radius * radius;
    return (price / area);
}

