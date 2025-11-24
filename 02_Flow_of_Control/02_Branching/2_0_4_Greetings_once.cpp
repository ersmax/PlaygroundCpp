#include <iostream>
using namespace std;

int main ( ) {
    int countDown;

    cout << "How many greetings do you want?";
    cin >> countDown;

    do {
        cout << "Hello! ";
        --countDown;
    } while (countDown > 0);

    cout << "\nThat's all.\n";
    return 0;
}