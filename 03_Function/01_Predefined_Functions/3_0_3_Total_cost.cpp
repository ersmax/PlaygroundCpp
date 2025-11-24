/*
Computes the total cost, including 5% sales tax,
on numberParameter items at a cost of priceParameter each.
*/
#include <iostream>
using namespace std;

// function prototype
double totalCost(int numberItem, double priceItem);

int main( ) {
    int number;
    double price, bill;

    cout << "Enter the number of items purchased:";
    cin >> number;
    cout << "Enter the price per item:";
    cin >> price;
    bill = totalCost(number, price);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << number << " items at "
         << price << " each.\n"
         << "Final bill, including tax, is $"
         << bill << endl;

    return 0;
}

double totalCost(int numberItem, double priceItem) {
    const double TAXRATE = 0.05;
    double subtotal;

    subtotal = numberItem * priceItem;
    return subtotal + subtotal * TAXRATE;

}