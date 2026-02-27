//   This program showcases the overload of = assignment operator through the use of
// pointers and dynamically allocated arrays.
// Objects of the class are partially filled arrays of doubles.
// The program asks the user to input two arrays of doubles
// and then assign the values of one array to the other with overload operator.

//   The advantage of using a class over a dynamic array or standard array are that
// we don't have to keep track of the size (the private variable used will do), and
// we get an error message if we try to access an illegal array index.
/*
This program tests the class PFArrayD.
Enter capacity of the array :
3
Enter up to 3 non negative numbers
Place a negative sentinel value at the end
1.2 5.4 1.2 - 1
You entered the following 3 numbers :
1.2 5.4 1.2
(plus a sentinel value.)

Good - bye cruel world!The short life of
this dynamic array is about to end
Test again(y / n) :
n
*/

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
	double *a;		// Pointer to an array of doubles
	int capacity;	// Size of array (n elements for which memory has been allocated)
	int used;		// N of array positions currently in use
};


void testPFArrayD();
// Postcondition: Conducts one test of the class PFArrayD

void showPFArrayD(PFArrayD parameter) { std::cout << "The first value is: " << parameter[0] << '\n'; }
// Precondition: `parameter` is an object passed by value to test the copy constructor of the class PFArrayD
// Postcondition: Displays the first value of the array named by the member variable `a` of the object `parameter`

int main( )
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
	if (this == &rightSide)
		return *this;
	
	if (capacity != rightSide.capacity)
	{
		delete [] a;
		a = new double[rightSide.capacity];
	}
	//   This condition also checks for the case of 
	// having the same object on both sides of the 
	// assignment operator. If we destroy the dynamic array,
	// we would not be able to trace back the values stored
	// in the array, and the assignment myArray = myArray
	// would inevitably fail. 
	// a would turn out to be a dangling pointer.
	// Hence, the condition ensures that if the same object 
	// occurs on both sides of the assignment operator, 
	// then the array named by the member variable `a` will
	// not be deleted with a call to delete.
	
	// This code below causes undefined behaviour
	// delete[] a;
	// a = new double[rightSide.capacity];
	
	capacity = rightSide.capacity;
	used = rightSide.used;
	for (int idx = 0; idx < used; idx++)
		a[idx] = rightSide[idx];
	return *this;
}

PFArrayD::~PFArrayD()
{
	delete [] a;
	// a = nullptr;  
	//   not necessary because after destructor runs,
	// the memory pointed by `a` is reclaimed and there is 
	// no risk accessing `a`, which is defined in the class, 
	// because the object is gone.
	// The object is being destroyed and its memory is reclaimed.
	// The memory assigned to dynamic variable and pointed to `a`
	// is returned to the freestore manager
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
	while ((next >= 0) && (!temp.full( )))
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


	int cap2;
	std::cout << "Enter capacity of the array:\n";
	std::cin >> cap2;
	PFArrayD temp2(cap2);

	std::cout << "Enter up to " << cap2 << " non negative numbers\n";
	std::cout << "Place a negative sentinel value at the end\n";

	double next2;
	std::cin >> next2;
	while ((next2 >= 0) && (!temp2.full()))
	{
		temp2.addElement(next2);
		std::cin >> next2;
	}

	std::cout << "You entered the following " << temp2.getNumberUsed() << " numbers:\n";
	int size2 = temp2.getNumberUsed();
	for (int idx = 0; idx < size2; idx++)
		std::cout << temp2[idx] << " ";

	std::cout << '\n';
	std::cout << "(plus a sentinel value.)\n";


	// Testing overload assignment operator
	//temp = temp2;
	temp = temp; // testing overload of same object
	int size3 = temp.getNumberUsed();
	for (int idx = 0; idx < size3; idx++)
		std::cout << temp[idx] << " ";

	std::cout << '\n';
	std::cout << "(plus a sentinel value.)\n";

	// Testing overload copy constructor
	PFArrayD sample(2);
	sample.addElement(5.5);
	sample.addElement(6.6);
	showPFArrayD(sample);
	// If a copy constructor is not defined, then the default copy constructor will be used, 
	// which performs a shallow copy of the object.

	std::cout << "After call: " << sample[0] << '\n';
	// If a copy constructor is not defined, this line will crash, because
	// the default copy constructor will perform a shallow copy of the object `sample`, 
	// and the destructor will be called twice on the same memory location, 
	// causing to delete first `parameter`, and hence parameter.a, 
	// then to delete `sample`, and hence sample.a, which is the same memory location as parameter.a,
	// This leads to undefined behavior and a crash of the program.e
}