// What is the output produced by the following program?

#include <iostream>

using namespace std;

namespace Sally
{
	void message();
}

namespace
{
	void message();
}

int main()
{
	{
		message();				// Hello from unnamed.
		using Sally::message;	
		message();				// Hello from Sally.
	}
	message();					// Hello from unnamed.
	return 0;
}

namespace Sally
{
	void message()
	{
		cout << "Hello from Sally.\n";
	}
}

namespace
{
	void message()
	{
		cout << "Hello from unnamed.\n";
	}
}