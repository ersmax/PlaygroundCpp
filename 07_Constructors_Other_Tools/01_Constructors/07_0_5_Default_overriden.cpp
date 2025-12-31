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
	int x = 1;
	int y = 2;
};

int main( )
{
	Coordinate grid1(0);
	std::cout << "grid1 x: " << grid1.getX() << '\n'
			  << "grid1 y: " << grid1.getY();
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
