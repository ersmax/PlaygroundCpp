/*
What is the output produced by the following program?
#include <iostream>
using namespace std;
char mystery(int firstParameter, int secondParameter);
int main( )
{
cout << mystery(10, 9) << "ow\n";
return 0;
}
char mystery(int firstParameter, int secondParameter)
{
if (firstParameter >= secondParameter)
return 'W';
else
return 'H';
}
*/
#include <iostream>
using namespace std;
char mystery(int firstParameter, int secondParameter);
int main( ) {
    cout << mystery(10, 9) << "ow\n";
    return 0;
}
char mystery(int firstParameter, int secondParameter) {
    if (firstParameter >= secondParameter)
        return 'W';
    else
        return 'H';
}
// Output: Wow
// Explanation: The function `mystery` compares the two parameters. Since 10 is
// greater than 9, it returns 'W'. The main function then appends "ow" to this character,
// resulting in the output "Wow".