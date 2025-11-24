#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ( ) {
    string text;
    fstream inputStream;

    inputStream.open("02_Flow_of_Control/04_File_Input/99_player.txt");

    while (inputStream >> text)     // if there is still data to read
        cout << text << endl;

    inputStream.close();

    return 0;
}
