//   This program shows member initialization, which allows to set 
// default values for member variables.

#include <iostream>

class Coordinate
{
public:
	Coordinate();
	Coordinate(int xVal);
	Coordinate(int xVal, int yVal);
	int getX() const;
	int getY() const;
private:
	//  Member initializers 
	int x = 1;
	int y = 2;
};

int main( )
{
	// grid1: x is overriden to 0, y uses the member initializer value of 2
	const Coordinate grid1(0);
	// grid2: x uses the member initializer value of 1, y uses the member initializer value of 2
	const Coordinate grid2; 
	std::cout << "grid1 x: " << grid1.getX() << '\n'
			  << "grid1 y: " << grid1.getY() << '\n';
	std::cout << '\n';
	std::cout << "grid2 x: " << grid2.getX() << '\n'
			  << "grid2 y: " << grid2.getY() << '\n';
	std::cout << '\n';
	return 0;
}

Coordinate::Coordinate()
{}

Coordinate::Coordinate(const int xVal) : x(xVal)
{}

Coordinate::Coordinate(const int xVal, const int yVal) 
					   : x(xVal), y(yVal)
{}

int Coordinate::getX() const
{
	return x;
}

int Coordinate::getY() const
{
	return y;
}
