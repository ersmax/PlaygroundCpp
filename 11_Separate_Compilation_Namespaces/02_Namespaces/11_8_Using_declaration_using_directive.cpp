//   What is the output produced by the following program?

// Hello
// Goodbye
// Goodbye

#include <iostream>
using namespace std;

namespace Hello					//   namespaces in this block uses the definitions
{								// in namespaces global, std, and Hello
	void message();
}

namespace GoodBye
{
	void message();
}

void message();

int main()
{
	using GoodBye::message;
	{
		using Hello::message;		// using declaration 
		message();					// Hello.
		GoodBye::message();			// Good-Bye.
	}
	message();						// Good-Bye.
	return 0;
}

void message()
{
	cout << "Global message.\n";
}

namespace Hello
{
	void message()
	{
		cout << "Hello.\n";
	}
}

namespace GoodBye
{
	void message()
	{
		cout << "Good-Bye.\n";
	}
}
