#include <iostream>
using namespace std;

int main() {
    const double RATE = 0.01;   // Interest rate
    double deposit;             // Amount of deposit

    cout << "Enter the amount of your deposit: $";
    cin >> deposit;

    double newBalance;
    newBalance = deposit + (deposit * RATE / 100);
    cout << "In one year, that deposit will grow to\n"
         << "$" << newBalance << endl;

    return 0;
}
