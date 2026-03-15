//   This program showcases the use of namespace grouping

#include <iostream>

namespace Space1
{
	void greeting();
}

namespace Space2
{
	void greeting();
}

void bigGreeting();						// global namespace

int main()
{
	Space1::greeting();					
	{									//   names in this block use definitions
		using namespace Space1;			// in namespaces Space1, std, and 	
		greeting();						// global namespace
	}									//

	Space2::greeting();
	{									//   names in this block use definitions
		using namespace Space2;			// in namespaces Space2, std, and
		greeting();						// global namespace
	}

	bigGreeting();							//   names here use definitions in the 
										// namespace std and global namespace
	std::cout << '\n';
	return 0;
}

namespace Space1
{
	void greeting()
	{
		std::cout << "Hello from namespace Space1\n";
	}
}

namespace Space2
{
	void greeting()
	{
		std::cout << "Hello from namespace Space2\n";
	}
}

void bigGreeting()
{
	std::cout << "Hello from global namespace\n";
}
