/*
    The Pizza Consumers Union has been very successful with the program that we wrote
    for it in Display 4.0.4. In fact, now everybody always buys the pizza that is the best buy.
    One disreputable pizza parlor used to make money by fooling consumers into buying
    the more expensive pizza, but our program has put an end to its evil practices.
    However, the owners wish to continue their despicable behavior and have come up
    with a new way to fool consumers. They now offer both round pizzas and rectangular
    pizzas. They know that the program we wrote cannot deal with rectangular-shaped
    pizzas, so they hope they can again confuse consumers. Display 4.7 is another version
    of our program that compares a round pizza and a rectangular pizza. Note that the
    function name unitPrice has been overloaded so that it applies to both round and
    rectangular pizzas.
 */

#include <iostream>     // std::cin, std::cout, std::endl, std::ios
#include <cmath>        // std::acos
#include <algorithm>    // std::sort
#include <vector>       // std::vector
#include <string>       // std::string
#include <iomanip>      // std::fixed, std::showpoint, std::setprecision
#include <utility>      // std::pair
using std::cin;
using std::cout;
using std::endl;
using std::ios;
using std::vector;
using std::pair;
using std::string;
using std::fixed;
using std::showpoint;
using std::setprecision;
using std::sort;

void getData(int& smallDiameter, int& largeDiameter,
            double& priceSmall, double& priceLarge);
// Precondition: smallDiameter, largeDiameter, priceSmall, and priceLarge are declared
// Postcondition: defines the values of the 4 parameters.
// Pass by reference to modify the variables declared in main.

void getData(int& smallLength, int& smallWidth,
             int& largeLength, int& largeWidth,
             double& priceSmall, double& priceLarge);
// Postcondition: defines the values of the 6 parameters.
// Pass by reference to modify the variables declared in main.

void giveResults(int smallDiameter, int largeDiameter,
                 int smallLength, int smallWidth,
                 int largeLength, int largeWidth,
                 double priceRoundSmall, double priceRoundLarge,
                 double priceRectangularSmall, double priceRectangularLarge);
// Precondition: all parameters are defined
// Postcondition: displays ranking of pizzas according to price per inch.
// Pass by value since no modification is needed.

bool compareByPrice(const pair<double, string>& firstElement,
                    const pair<double, string>& secondElement);
// Precondition: firstElement and secondElement are already defined.
// Postcondition: return true if firstElement is cheaper than secondElement.
// Pass by reference to avoid copying overhead, const to avoid modification.

double unitPrice(int diameter, double price);
// Precondition: diameter and price are defined
// Postcondition: returns the unit price (price per square inch)

double unitPrice(int length, int width, double price);
// Precondition: length, width, and price are defined
// Postcondition: returns the unit price (price per square inch)

int main( ) {
    // PostCondition: Prompts user for pizza data and
    //                displays ranking of pizzas according to price per inch.
    int diameterSmall, diameterLarge,
        lengthSmall, widthSmall,
        lengthLarge, widthLarge;
    double priceRoundSmall, priceRoundLarge,
           priceRectangularSmall, priceRectangularLarge;

    cout << "Welcome to Pizza Hut.\n";
    getData(diameterSmall, diameterLarge,
            priceRoundSmall, priceRoundLarge);
    getData(lengthSmall, widthSmall,
            lengthLarge, widthLarge,
            priceRectangularSmall, priceRectangularLarge);
    giveResults(diameterSmall, diameterLarge,
                lengthSmall, widthSmall,
                lengthLarge, widthLarge,
                priceRoundSmall, priceRoundLarge,
                priceRectangularSmall, priceRectangularLarge);
    return 0;
}


void getData(int& smallDiameter, int& largeDiameter,
             double& priceSmall, double& priceLarge) {

    cout << "Enter the diameter and price of a SMALL round pizza\n "
        << "(separated by space, e.g. 10 8.99): ";
    cin >> smallDiameter >> priceSmall;
    cout << "Enter the diameter and price of a LARGE round pizza\n "
         << "(separated by space, e.g. 12 10.99): ";
    cin >> largeDiameter >> priceLarge;
}


void getData(int& smallLength, int& smallWidth,
             int& largeLength, int& largeWidth,
             double& priceSmall, double& priceLarge) {

    cout << "Enter the length, width and price of a SMALL pizza\n"
         << "(separated by space, e.g. 10 12 10.99): ";
    cin >> smallLength >> smallWidth >> priceSmall;
    cout << "Enter the length, width and price of a LARGE pizza\n"
         << "(separated by space, e.g. 12 14 12.99): ";
    cin >> largeLength >> largeWidth >> priceLarge;
}

void giveResults(int smallDiameter, int largeDiameter,
                 int smallLength, int smallWidth,
                 int largeLength, int largeWidth,
                 double priceRoundSmall, double priceRoundLarge,
                 double priceRectangularSmall, double priceRectangularLarge) {

    double pPizzaRoundSmall = unitPrice(smallDiameter, priceRoundSmall);
    double pPizzaRoundLarge = unitPrice(largeDiameter, priceRoundLarge);
    double pPizzaRectangularSmall = unitPrice(smallLength, smallWidth, priceRectangularSmall);
    double pPizzaRectangularLarge = unitPrice(largeLength, largeWidth, priceRectangularLarge);

    // Use vector for faster STL operations: sort later on unit price
    vector<pair<double, string>> pricePizza = {
        { pPizzaRoundSmall, "Round SMALL"},
        { pPizzaRoundLarge, "Round LARGE"},
        { pPizzaRectangularSmall, "Rectangular SMALL"},
        { pPizzaRectangularLarge, "Rectangular LARGE"}
    };

    // Sort the vector `price-Pizza` according to price per inch
    sort(pricePizza.begin(), pricePizza.end(),compareByPrice);

    cout << fixed << showpoint << setprecision(2);
    cout << "Ranking from cheapest to priciest (price per inch):\n";

    for (int idx = 0; idx < pricePizza.size(); idx++) {
        cout << (idx + 1) << ") " << pricePizza[idx].second
                          << "= " << pricePizza[idx].first << "\n";
    }
    cout << "Cheapest pizza: " << pricePizza[0].second << endl;
}

bool compareByPrice(const pair<double, string>& firstElement,
                    const pair<double, string>& secondElement) {
    return (firstElement.first < secondElement.first);
}

double unitPrice(int diameter, double price) {
    const double PI = acos(-1.0);
    double radius = diameter / static_cast<double>(2);
    double area = PI * radius * radius;
    return (price / area);
}

double unitPrice(int length, int width, double price) {
    double area = length * width;
    return (price / area);
}
