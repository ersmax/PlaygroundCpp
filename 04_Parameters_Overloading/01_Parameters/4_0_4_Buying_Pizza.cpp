// Determines which of two pizza sizes is the best buy.
//  according to the price per inch
#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::ios;


void getData(int& smallDiameter, int& largeDiameter,
             double& priceSmall, double& priceLarge);
// Precondition: smallDiameter, largeDiameter, priceSmall, and priceLarge are declared
// Postcondition: defines the values of the 4 parameters

void giveResults(int smallDiameter, int largeDiameter,
                 double priceSmall, double priceLarge);
// Precondition: smallDiameter, largeDiameter, priceSmall, and priceLarge are defined
// Postcondition: displays which pizza is the best buy

double unitPrice(int diameter, double price);
// Precondition: diameter and price are defined
// Postcondition: returns the unit price (price per square inch)

int main( ) {
    // PostCondition: Prompts user for pizza data and
    //                displays which pizza is the best buy.
    int diameterSmall, diameterLarge;
    double priceSmall, priceLarge;
    getData(diameterSmall, diameterLarge, priceSmall, priceLarge);
    giveResults(diameterSmall, diameterLarge, priceSmall, priceLarge);
    return 0;
}

void getData(int& smallDiameter, int& largeDiameter, double& priceSmall, double& priceLarge) {
    cout << "Welcome to Pizza Hut.\n";
    cout << "Enter the size of a small pizza (inches):";
    cin >> smallDiameter;
    cout << "Enter the price of a small pizza:";
    cin >> priceSmall;
    cout << "Enter the size of a large pizza (inches):";
    cin >> largeDiameter;
    cout << "Enter the price of a small pizza:";
    cin >> priceLarge;
}

void giveResults(int smallDiameter, int largeDiameter, double priceSmall, double priceLarge) {
    double unitPriceSmall, unitPriceLarge;

    unitPriceSmall = unitPrice(smallDiameter, priceSmall);
    unitPriceLarge = unitPrice(largeDiameter, priceLarge);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    if (unitPriceSmall < unitPriceLarge)
        cout << "Small pizza is cheaper than large";
    else if (unitPriceSmall > unitPriceLarge)
        cout << "Small pizza cost more than large";
    else
        cout << "Small and large cost equally";
    cout << " (" << unitPriceSmall
         << " vs " << unitPriceLarge
         << ")\n";
}

double unitPrice(int diameter, double price) {
    const double PI = std::acos(-1.0); // arccosine on -1.0
    double radius = diameter / static_cast<double>(2);
    double area = PI * radius * radius;
    return (price/area);
}


