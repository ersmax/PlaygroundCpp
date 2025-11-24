/*
Consider a file of high scores. The first line is an integer that stores the number
of records in the file. The records alternate between the name of the player (first
name only) and the player’s score. Here is a sample file named scores.txt
consisting of three entries:
3
Gordon
500
Mario
550
Illidan
385.
Write code that reads the file and outputs the player’s name and score on one
line, e.g.,
Gordon, 500
Mario, 550
Illidan, 385
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ( ) {
    fstream inputStream;
    int scores;

    inputStream.open("02_Flow_of_Control/04_File_Input/99_scores.txt");
    if (!inputStream.is_open()) {
        cout << "Failed to open the file" << endl;
        return -1;
    }

    inputStream >> scores;

    for (int idx = 0; idx < scores; idx++) {
        string name;
        int score;
        inputStream >> name;
        inputStream >> score;
        cout << name << ", " << score << endl;
    }
    inputStream.close();

    return 0;
}