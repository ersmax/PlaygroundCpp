// Computes the area of a circle and the volume of a sphere
// Uses the same radius for both calculations
#include <iostream>
#include <cmath>
using namespace std;

constexpr double PI = 3.14159;

double area(double radius);
// Postcondition: Returns the area of a circle with the specified radius

double volume(double radius);
// Postposition: returns the volume of a sphere with specified radius

int main( ) {
    double radiusOfBoth, areaOfCircle, volumeOfSphere;

    cout << "Enter a radius to use for both a circle\n"
         << "and a sphere:";
    cin >> radiusOfBoth;

    areaOfCircle = area(radiusOfBoth);
    volumeOfSphere = volume(radiusOfBoth);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "Radius = " << radiusOfBoth << endl
         << "Area of circle = " << areaOfCircle << endl
         << "Volume of sphere = " << volumeOfSphere << endl;

    return 0;
}

double area(double radius) {
    return (PI * pow(radius, 2));
}

double volume(double radius) {
    return ((4/3.0) * PI * pow(radius, 3));
}
