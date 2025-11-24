/*
Write a void function definition for a function called addTax. The function
addTax has two formal parameters: taxRate, which is the amount of sales tax
expressed as a percentage; and cost, which is the cost of an item before tax. The
function changes the value of cost so that it includes sales tax.
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::ios;

const double TAX_RATE = 21;

void addTax(double tax, double& cost);

int main( ) {
    double cost = 100;
    addTax(TAX_RATE, cost);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Total cost: " << cost << endl;

    return 0;
}

void addTax(double tax, double& cost) {
    cost = cost + (tax/100.0) * cost;
}

