#include <iostream>
using namespace std;

int main ( ) {
    int numberOfItems, caloriesPerItem;

    cout << "How many items did you eat today?";
    cin >> numberOfItems;
    int totalCalories = 0;
    int count = 0;
    cout << "Enter the number of calories in each of the\n"
         << numberOfItems << " items eaten (separated by space):\n";

    while (++count <= numberOfItems) {
        cin >> caloriesPerItem;
        totalCalories += caloriesPerItem;
    }

    cout << "Total calories eaten today: "
         << totalCalories << endl;
    return 0;
}