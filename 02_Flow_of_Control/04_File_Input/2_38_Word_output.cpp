/*
The following code is supposed to output every word in the file and only every
word in the file, but it does not quite work. What is wrong?
bool moreToRead = true;
while (moreToRead)
{
string text;
moreToRead = inputStream >> text;
cout << text << endl;
}
*/
// Fixed version:
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ( ) {
    string text;
    fstream inputStream;
    inputStream.open("02_Flow_of_Control/04_File_Input/99_player.txt");

    while (inputStream >> text)
        cout << text << endl;

    inputStream.close();

    return 0;
}

// Explanation:
// We should aim to output the value read first, and then read the next value.
// This way, we ensure that we only attempt to output valid data that has been
// successfully read from the file. Else, we might
// end up trying to output an uninitialized or invalid value if the read operation
// fails (for example, when reaching the end of the file).
//
// The original code attempts to read words from a file using the extraction operator (>>)
// and assign the result to a boolean variable (moreToRead). However, the extraction operator
// does not return a boolean value; it returns the input stream itself, which can be evaluated
// in a boolean context. The correct way to check if there are more words to read is
// to use the input stream in a boolean context directly. The fixed version reads words
// from the file and outputs them correctly.
