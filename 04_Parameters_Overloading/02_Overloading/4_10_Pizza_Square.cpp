/*
    This question has to do with the programming example entitled “Revised
    Pizza-Buying Program.” (4_0_6). Suppose the evil pizza parlor that is always trying
    to fool customers introduces a square pizza. Can you overload the function
    unitPrice so that it can compute the price per square inch of a square pizza as
    well as the price per square inch of a round pizza? Why or why not?
*/

// Answer: In theory, you cannot because if you did, you would have two functions with the same
// signature (both taking two parameters: an int and a double).
// Formally:
// This cannot be done (at least not in any nice way). The natural ways to represent
// a square and a round pizza are the same. Each is naturally represented as one
// number, which is the radius for a round pizza and the length of a side for a square
// pizza. In either case the function unitPrice would need to have one formal
// parameter of type double for the price and one formal parameter of type int for
// the size (either radius or side). Thus, the two function declarations would have
// the same number and types of formal parameters. (Specifically, they would both
// have one formal parameter of type double and one formal parameter of type int.)
// Thus, the compiler would not be able to decide which definition to use.
//
// You can still defeat this evil pizza parlor’s strategy by defining two functions,
// but they will need to have different names.
//
// Another approach would be changing the parameter list of one of the functions.
// For instance, you can overload the function unitPrice to accept
// a double for the side of square pizza, and rely on the type coercion or casting
// from int to double. However, this is not a clean solution and may lead to ambiguity.
// In details, if an int is passed to unitPrice for the parameter `side`, the
// function unitPrice for the Round Pizza will be called instead of the one for Square Pizza,
// since the first overloaded function that is used is that with the
// exact number and types of arguments matching the function signature.
// This defeats the purpose of overloading the function for different pizza shapes.

// #define NDEBUG
#include <iostream>     // std::cin, std::cout, std::endl, std::ios
#include <cmath>        // std::acos
#include <algorithm>    // std::sort
#include <vector>       // std::vector
#include <string>       // std::string
#include <iomanip>      // std::fixed, std::showpoint, std::setprecision
#include <utility>      // std::pair
#include <cassert>
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
using std::is_same_v;

void getData(int& smallDiameter, int& largeDiameter,
            double& priceSmall, double& priceLarge);
// Precondition: smallDiameter and largeDiameter are greater than 0
// Postcondition: defines the values of the 4 parameters.
// Pass by reference to modify the variables declared in main.

void getData(int& smallLength, int& smallWidth,
             int& largeLength, int& largeWidth,
             double& priceSmall, double& priceLarge);
// Precondition: smallLength, smallWidth, largeLength, largeWidth are greater than 0
// Postcondition: defines the values of the 6 parameters.
// Pass by reference to modify the variables declared in main.

void getData(double& sideSmall, double& sideLarge,
             double& priceSmall, double& priceLarge);
// Precondition: sideSmall and sideLarge are greater than 0
// Postcondition: defines the values of the 4 parameters.
// Pass by reference to modify the variables declared in main.

void giveResults(int smallDiameter, int largeDiameter,
                 int smallLength, int smallWidth,
                 int largeLength, int largeWidth,
                 double sideSmall, double sideLarge,
                 double priceRoundSmall, double priceRoundLarge,
                 double priceRectangularSmall, double priceRectangularLarge,
                 double priceSideSmall, double priceSideLarge);
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

double unitPrice(double side, double price);
// Precondition: side and price are defined
// Postcondition: returns the unit price (price per square inch) for square pizza

int main( ) {
    // PostCondition: Prompts user for pizza data and
    //                displays ranking of pizzas according to price per inch.
    int diameterSmall, diameterLarge,
        lengthSmall, widthSmall,
        lengthLarge, widthLarge;
    double sideSmall, sideLarge,
           priceRoundSmall, priceRoundLarge,
           priceRectangularSmall, priceRectangularLarge,
           priceSideSmall, priceSideLarge;

    cout << "Welcome to Pizza Hut.\n";

    getData(diameterSmall, diameterLarge,
            priceRoundSmall, priceRoundLarge);
    assert( (0 < diameterSmall) && (0 < diameterLarge)
        && "Diameter should be greater than 0.");

    getData(lengthSmall, widthSmall,
            lengthLarge, widthLarge,
            priceRectangularSmall, priceRectangularLarge);
    assert( (0 < lengthSmall) && (0 < widthSmall)
         && (0 < lengthLarge) && (0 < widthLarge)
         && "Diameter should be greater than 0.");

    getData(sideSmall, sideLarge,
            priceSideSmall, priceSideLarge);
    assert( (0 < sideSmall) && (0 < sideLarge)
        && "Diameter should be greater than 0.");

    giveResults(diameterSmall, diameterLarge,
                lengthSmall, widthSmall,
                lengthLarge, widthLarge,
                sideSmall, sideLarge,
                priceRoundSmall, priceRoundLarge,
                priceRectangularSmall, priceRectangularLarge,
                priceSideSmall, priceSideLarge);
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

void getData(double& sideSmall, double& sideLarge,
             double& priceSmall, double& priceLarge) {
    cout << "Enter the side and price of a SMALL square pizza\n "
        << "(separated by space, e.g. 15 8.99): ";
    cin >> sideSmall >> priceSmall;
    cout << "Enter the side and price of a LARGE square pizza\n "
         << "(separated by space, e.g. 16 10.99): ";
    cin >> sideLarge >> priceLarge;
}


void giveResults(int smallDiameter, int largeDiameter,
                 int smallLength, int smallWidth,
                 int largeLength, int largeWidth,
                 double sideSmall, double sideLarge,
                 double priceRoundSmall, double priceRoundLarge,
                 double priceRectangularSmall, double priceRectangularLarge,
                 double priceSideSmall, double priceSideLarge) {

    double pPizzaRoundSmall = unitPrice(smallDiameter, priceRoundSmall);
    double pPizzaRoundLarge = unitPrice(largeDiameter, priceRoundLarge);
    double pPizzaRectangularSmall = unitPrice(smallLength, smallWidth, priceRectangularSmall);
    double pPizzaRectangularLarge = unitPrice(largeLength, largeWidth, priceRectangularLarge);
    double pPizzaSquareSmall = unitPrice(sideSmall, priceSideSmall);
    double pPizzaSquareLarge = unitPrice(sideLarge, priceSideLarge);

    // Use vector for faster STL operations: sort later on unit price
    vector<pair<double, string>> pricePizza = {
        { pPizzaRoundSmall, "Round SMALL"},
        { pPizzaRoundLarge, "Round LARGE"},
        { pPizzaRectangularSmall, "Rectangular SMALL"},
        { pPizzaRectangularLarge, "Rectangular LARGE"},
        { pPizzaSquareSmall, "Square SMALL"},
        { pPizzaSquareLarge, "Square LARGE"}
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
    cout << "Calling ROUND unit Price\n";
    const double PI = acos(-1.0);
    double radius = diameter / static_cast<double>(2);
    double area = PI * radius * radius;
    return (price / area);
}

double unitPrice(int length, int width, double price) {
    cout << "Calling RECTANGULAR unit Price\n";
    double area = length * width;
    return (price / area);
}

double unitPrice(double side, double price) {
    cout << "Calling SQUARE unit Price\n";

    static_assert(is_same_v<decltype(side), double>, "`side` must be double");
    double area = side * side;
    return (price / area);
}
