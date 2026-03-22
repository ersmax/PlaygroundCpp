//  What is the output produced by the following program?

#include <iostream>

using namespace std;

namespace Outer
{
	void message();
	namespace Inner
	{
		void message();
	}
}

int main()
{
	Outer::message();				// Outer.
	Outer::Inner::message();		// Inner.
	using namespace Outer;
	Inner::message();				// Inner.
	return 0;
}

namespace Outer
{
	void message()
	{
		cout << "Outer.\n";
	}
	namespace Inner
	{
		void message()
		{
			cout << "Inner.\n";
		}
	}
}