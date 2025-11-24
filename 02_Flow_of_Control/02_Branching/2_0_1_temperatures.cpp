#include <iostream>
using namespace std;
using std::string;

int main ( ) {
    int temperature;
    string day;
    cout << "Enter the temperature:";
    cin >> temperature;
    cout << "Enter the day of the week:";
    cin >> day;

    if (temperature < -10 && day == "SUNDAY")
        cout << "Stay inside.\n";
    else if (temperature < -10)
        cout << "Stay home, but go to work.\n";
    else if (temperature <= 0)
        cout << "Dress warm\n";
    else
        cout << "Work hard";
    return 0;
}