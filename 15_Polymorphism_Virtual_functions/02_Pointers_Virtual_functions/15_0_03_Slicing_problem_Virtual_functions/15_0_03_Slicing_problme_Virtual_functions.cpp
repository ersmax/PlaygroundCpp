//   This program illustrates the use of a virtual function to defeat
// the slicing problem (that is a derived type that is treated 
// as base type and loses all its additional member functions and variable
// after being assigned to a variable of the ancestor class)

#include <string>
#include <iostream>

class Pet
{
public:
	std::string name;
	virtual void print() const;
};

class Dog : public Pet
{
public :
	std::string breed;
	virtual void print() const override;
};

int main( )
{
	Dog vDog;
	Pet vPet;
	vDog.name = "Tiny";
	vDog.breed = "Great Dane";
	vPet = vDog;	// Slicing problem
	std::cout << vPet.name << '\n';
	// vPet.breed;	// Illegal: class Pet has no member named breed
	std::cout << "Invoking print() from Pet class\n";
	vPet.print();

	std::cout << "Using pointers to dynamic variables, slicing problem is solved\n";
	Pet *pPet;
	Dog *pDog;
	pDog = new Dog;
	pDog->name = "Tiny";
	pDog->breed = "Great Dane";
	pPet = pDog;
	pPet->print();
	pDog->print();
	// pPet->breed;	// mistake: class Pet has no member named breed
}

void Pet::print() const { std::cout << name << '\n'; }

void Dog::print() const { std::cout << name << ", " << breed << '\n'; }