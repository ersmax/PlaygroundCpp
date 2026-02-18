// This program showcases the overload of array operator []

#include <iostream>
#include <cstdlib>

class CharPair
{
public:
	CharPair() {};
	CharPair(const char firstValue, const char secondValue) : first(firstValue), second(secondValue) {};
	char& operator [](int index);
private:
	char first;
	char second;
};

int main( )
{
	CharPair a;
	a[1] = 'A';
	a[2] = 'B';
	std::cout << "a[1] and a[2] are:\n";
	std::cout << a[1] << " " << a[2] << '\n';

	std::cout << "Enter two letters: \n";
	std::cin >> a[1] >> a[2];
	std::cout << "You entered:\n";
	std::cout << a[1] << a[2] << '\n';	
	
	std::cout << '\n';
	return 0;
}

char& CharPair::operator[](const int index)
{
	if (index == 1)
		return first;
	else if (index == 2)
		return second;
	else
	{
		std::cout << "Illegal index value\n";
		std::exit(-1);
	}
}
