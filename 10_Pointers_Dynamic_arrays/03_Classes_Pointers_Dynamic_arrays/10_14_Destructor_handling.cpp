//Suppose you change the definition of the destructor in Display 10.11 to the
//following.How would the sample dialogue in Display 10.12 change ?
//PFArrayD::~PFArrayD()
//{
//	cout << "\nGood-bye cruel world! The short life of\n"
//		<< "this dynamic array is about to end.\n";
//	delete[] a;
//}

//   The message would be printed just after the object goes out of scope,
// that is when the function returns and the object is destroyed.

#include <iostream>

class PFArrayD
{
public:
	PFArrayD();		// Initialize with a capacity of 50
	PFArrayD(int capacityValue);
	PFArrayD(const PFArrayD& pfaObject);
	//	 Copy constructor

	void addElement(double element);
	//   Precondition: the array is not full
	//   Postcondition: The element has been added

	bool full() const { return (capacity == used); }
	int getCapacity() const { return capacity; }
	int getNumberUsed() const { return used; }

	void emptyArray() { used = 0; }
	//   Postcondition: empty the array

	double& operator [](int index) const;
	//   Postcondition: read and change access to elements 0 through numberUsed - 1

	PFArrayD& operator =(const PFArrayD& rightSide);
	//   Postcondition: overload assignment operator after checking that rightSide
	// is not equal to the calling object.

	~PFArrayD();
	//	 Destructor
private:
	double* a;		// Pointer to an array of doubles
	int capacity;	// Size of array (n elements for which memory has been allocated)
	int used;		// N of array positions currently in use
};


void testPFArrayD();
// Postcondition: Conducts one test of the class PFArrayD

void showPFArrayD(PFArrayD parameter) { std::cout << "The first value is: " << parameter[0] << '\n'; }
// Precondition: `parameter` is an object passed by value to test the copy constructor of the class PFArrayD
// Postcondition: Displays the first value of the array named by the member variable `a` of the object `parameter`

int main()
{
	std::cout << "This program tests the class PFArrayD.\n";
	char ans;
	do
	{
		testPFArrayD();
		std::cout << "Test again (y/n):\n";
		std::cin >> ans;
	} while ((ans == 'y') || (ans == 'Y'));

	std::cout << '\n';
	return 0;
}

PFArrayD::PFArrayD() : capacity(50), used(0)
{
	a = new double[capacity];
	// Create dynamically allocated array of doubles and return pointer to `a`
}

PFArrayD::PFArrayD(const int capacityValue) : capacity(capacityValue), used(0)
{
	a = new double[capacity];
}

PFArrayD::PFArrayD(const PFArrayD& pfaObject) : capacity(pfaObject.capacity),
used(pfaObject.used)

{
	a = new double[capacity];
	for (int idx = 0; idx < used; idx++)
		a[idx] = pfaObject.a[idx];
}

void PFArrayD::addElement(const double element)
{
	if (used >= capacity)
	{
		std::cout << "Attempt to exceed capacity in PFArrayD\n";
		std::exit(0);
	}
	a[used] = element;
	used++;
}

double& PFArrayD::operator [](const int index) const
{
	if (index >= used)
	{
		std::cout << "Illegal index in PFArrayD\n";
		std::exit(0);
	}
	return a[index];
}

PFArrayD& PFArrayD::operator =(const PFArrayD& rightSide)
{
	if (capacity != rightSide.capacity)
	{
		delete[] a;
		a = new double[rightSide.capacity];
	}
	capacity = rightSide.capacity;
	used = rightSide.used;
	for (int idx = 0; idx < used; idx++)
		a[idx] = rightSide[idx];
	return *this;
}

PFArrayD::~PFArrayD()
{
	std::cout << "\nGood - bye cruel world!The short life of\n"
			  << "this dynamic array is about to end\n";
	delete[] a;
}

void testPFArrayD()
{
	int cap;
	std::cout << "Enter capacity of the array:\n";
	std::cin >> cap;
	PFArrayD temp(cap);

	std::cout << "Enter up to " << cap << " non negative numbers\n";
	std::cout << "Place a negative sentinel value at the end\n";

	double next;
	std::cin >> next;
	while ((next >= 0) && (!temp.full()))
	{
		temp.addElement(next);
		std::cin >> next;
	}

	std::cout << "You entered the following " << temp.getNumberUsed() << " numbers:\n";
	int size = temp.getNumberUsed();
	for (int idx = 0; idx < size; idx++)
		std::cout << temp[idx] << " ";

	std::cout << '\n';
	std::cout << "(plus a sentinel value.)\n";
}