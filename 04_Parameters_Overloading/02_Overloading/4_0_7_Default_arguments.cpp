// Show the functioning of default argument
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void showVolume(int length, int width = 1, int height = 1);
// Precondition: length, width, and height are defined
// Postcondition: show the volume of the box

int main( ) {
    showVolume(4, 6, 2);
    showVolume(4, 6);
    showVolume(4);

    return 0;
}

void showVolume(int length, int width, int height) {
    cout << "Volumen of a " << length << "x"
                            << width << "x"
                            << height << " box: "
                            << length * width * height << endl;
}
