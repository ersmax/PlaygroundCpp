/*
What is the output of the following code fragment?
int a[10];
int arraySize = 10;
int *p = a;
int i;
for (i = 0; i < arraySize; i++)
 a[i] = i;
for (i = 0; i < arraySize; i++)
 cout << p[i] << " ";
cout << endl;
*/

// 0 1 2 .. 9

#include <iostream>

int main( )
{
	int a[10];
	constexpr int arraySize = 10;
	const int *p = a;
	int i;
	for (i = 0; i < arraySize; i++)
		a[i] = i;
	for (i = 0; i < arraySize; i++)
		std::cout << p[i] << " ";
	std::cout << '\n';
	return 0;
}