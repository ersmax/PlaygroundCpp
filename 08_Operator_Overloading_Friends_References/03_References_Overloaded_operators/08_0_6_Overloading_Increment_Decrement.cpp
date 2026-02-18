//   This program showcases the overload of the increment and decrement operators
// both in prefix notation (++a) and postfix notation (a++)

#include <iostream>
#include <cstdlib>

class IntPair
{
public:
	IntPair(const int firstValue, const int secondValue) { setFirst(firstValue); setSecond(secondValue); }
	IntPair& operator ++();					// Prefix notation (returns by reference to allows chaining: ++(++a)
	const IntPair operator ++(int);			// Postfix notation	(returns by value)
	void setFirst(const int newValue) { first = newValue; }
	void setSecond(const int newValue) { second = newValue; }
	int getFirst() const { return first; }
	int getSecond() const { return second; }
private:
	int first;
	int second;
};

int main( )
{	
	IntPair a(1, 2);
	std::cout << "Postfix a++\n"
			  << "Start value of a: ";
	std::cout << a.getFirst() << " " << a.getSecond() << '\n';
	const IntPair b = a++;
	std::cout << "Value returned: ";
	std::cout << b.getFirst() << " " << b.getSecond() << '\n';
	std::cout << "Changed object: ";
	std::cout << a.getFirst() << " " << a.getSecond() << '\n';

	a = IntPair(1, 2);
	std::cout << "Prefix ++a\n"
			  << "Start value of a: ";
	std::cout << a.getFirst() << " " << a.getSecond() << '\n';
	const IntPair c = ++a;
	std::cout << "Value returned: ";
	std::cout << c.getFirst() << " " << c.getSecond() << '\n';
	std::cout << "Changed object: ";
	std::cout << a.getFirst() << " " << a.getSecond() << '\n';

	std::cout << '\n';
	return 0;
}

IntPair& IntPair::operator ++()
{
	first++;
	second++;
	//   *this is the calling object that is being incremented with prefix operator, 
	// and it is returned by reference to allow chaining of the operator, such as ++(++a)
	return *this;	
}

const IntPair IntPair::operator ++(int)
{
	const IntPair temp(first, second);
	first++;
	second++;
	return temp;
}
