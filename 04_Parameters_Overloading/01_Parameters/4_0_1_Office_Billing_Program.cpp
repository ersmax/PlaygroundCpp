/*
This program computes the bill due to
startting from hours and minutes
passed by value.
*/

#include <iostream>
using std::cin;
using std::cout;
using std::ios;


const double RATE = 150.00;

double fee(int hoursWorked, int minutesWorked);
// Precondition: hoursWorked and minutesWorked are non-negative integers
// Postcondition: returns the fee for legal service
//               based on the time worked

int main( ) {
    // Postcondition: Prompts user for hours and minutes worked,
    //                then displays the bill due.
    int hours, minutes;
    double bill;

    cout << "Enter the hours and minutes\n"
         << "of legal service\n"
         << "(separated by a space):";
    cin >> hours >> minutes;

    bill = fee(hours, minutes);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "For " << hours << " hours and "
         << minutes << " minutes, your bill is $"
         << bill << "\n";

    return 0;
}

double fee(int hoursWorked, int minutesWorked) {
    // Local variables: hoursWorked, minutesWorked, quarterHours
    int quarterHours;

    minutesWorked = hoursWorked * 60 + minutesWorked;
    quarterHours = minutesWorked / 15;
    return (quarterHours * RATE);
}



