/*
Modify your solution to Self-Test Exercise 39 to output only the name and
score of the player with the highest score.
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ( ) {
    int scores, bestScore = -1;
    string bestName;
    fstream inputStream;

    inputStream.open("02_Flow_of_Control/04_File_Input/99_scores.txt");
    if (!inputStream.is_open()) {
        cout << "File cannot be open" << endl;
        return -1;
    }

    inputStream >> scores;

    for (int idx = 0; idx < scores; idx++) {
        int score;
        string name;
        inputStream >> name;
        inputStream >> score;

        if (score > bestScore) {
            bestScore = score;
            bestName = name;
        }
    }
    inputStream.close();
    cout << bestName << ", " << bestScore << endl;

    return 0;
}