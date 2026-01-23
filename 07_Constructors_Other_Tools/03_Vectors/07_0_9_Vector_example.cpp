// This program showcases the use of `vector` template in the STL

#include <iostream>
#include <vector>

int main( )
{
	std::vector<int> v;
	std::cout << "Enter a list of positive numbers.\n"
			  << "Place a negative number at the end.\n";
	int next;
	std::cin >> next;

	while (next > 0)
	{
		v.push_back(next);
		std::cout << next << " added. "
				  << "v.size = " << v.size() << '\n';
		std::cin >> next;
	}
	std::cout << "You entered:\n";
	for (unsigned int idx = 0; idx < v.size(); idx++)
		std::cout << v[idx] << " ";

	std::cout << '\n';
	return 0;
}