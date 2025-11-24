#include <filesystem>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ( ) {
    string firstName, lastName;
    int score;
    fstream inputStream;
    cout << "Current working directory: " << filesystem::current_path() << endl;

    inputStream.open("02_Flow_of_Control/04_File_Input/99_player.txt");

    if (!inputStream.is_open()) {
        cout << "Failed to open file." << endl;
        return -1;
    }

    inputStream >> score;
    inputStream >> firstName >> lastName;

    cout << "Name: " << firstName << " "
         << lastName << endl;
    cout << "Score: " << score << endl;

    inputStream.close();

    return 0;
}