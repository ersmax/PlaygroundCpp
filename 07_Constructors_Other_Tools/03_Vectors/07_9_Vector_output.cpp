// Is the following program legal? If so, what is the output?
// Output: 0 1 2 3 ... 9
// while `v`: 42 1 2 ... 9, because copy=v is an independent copy of v

#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v(10);
	int i;
	for (i = 0; i < v.size(); i++)
		v[i] = i;
	vector<int> copy;
	copy = v;
	v[0] = 42;
	for (i = 0; i < copy.size(); i++)
		cout << copy[i] << " ";
	cout << endl;
	return 0;
}