//What is the output produced by the following code ?
/*
int *p1, *p2;
p1 = new int;
p2 = new int;
*p1 = 10;
*p2 = 20;
cout << *p1 << " " << *p2 << endl;
p1 = p2;
cout << *p1 << " " << *p2 << endl;
*p1 = 30;
cout << *p1 << " " << *p2 << endl;
*/

// 10 20
// 20 20
// 30 30

/*
How would the output change if you were to replace
* p1 = 30;
with the following ?
*p2 = 30;
*/

// 10 20
// 20 20
// 30 30 Output would be the same

#include <iostream>
using namespace std;

int main( )
{
	int* p1, * p2;
	p1 = new int;
	p2 = new int;
	*p1 = 10;
	*p2 = 20;
	cout << *p1 << " " << *p2 << endl;
	p1 = p2;
	cout << *p1 << " " << *p2 << endl;
	*p1 = 30;
	cout << *p1 << " " << *p2 << endl;
	return 0;
}