
#include <iostream>
#include <string>

class Pet
{
public:
	std::string name;
	virtual void print() const;
};

class Dog : public Pet
{
public:
	std::string breed;
	virtual void print() const override;
};

void Pet::print() const
{
	std::cout << "name: " << name << '\n';
}

void Dog::print() const
{
	std::cout << "name: " << name << '\n';
	std::cout << "breed: " << breed << '\n';
}

int main( )
{
	Dog vDog;
	Pet vPet;
	Pet *ppet;
	Dog *pdog;

	ppet = new Pet;
	ppet->name = "New name";
	pdog = new Dog;
	pdog->name = "Tiny";
	pdog->breed = "Great Dane";

	vDog.name = "Tiny";
	vDog.breed = "Great Dane";
	vPet = vDog;
	std::cout << vPet.name << "\n" ;
	/* This is illegal */
	// std::cout << vPet.breed;

	/* But this is legal */
	ppet->print();
	delete ppet;
	ppet = pdog;
	ppet->print();

	std::cout << '\n';
	return 0;
}
