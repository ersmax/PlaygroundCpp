/*
What is the output of the following code?
double a[3] = {1.1, 2.2, 3.3};
cout << a[0] << " " << a[1] << " " << a[2] << endl;
a[1] = a[2];
cout << a[0] << " " << a[1] << " " << a[2] << endl;
*/

// 1.1 2.2 3.3
// 1.1 3.3 3.3

#include <iostream>

int main( ) {
    double a[3] = {1.1, 2.2, 3.3};
    std::cout << a[0] << " " << a[1] << " " << a[2] << std::endl;
    a[1] = a[2];
    std::cout << a[0] << " " << a[1] << " " << a[2] << std::endl;
    return 0;
}