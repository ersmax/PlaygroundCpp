//   This is the implementation file 14_0_02_PF_Array.cpp.
// The implementation file implement the member functions of class PFArrayD.

#include <iostream>
#include "14_0_02_PF_Array.h"

namespace myNamespace
{
	PFArrayD::PFArrayD() : capacity(50), used(0)
	{
		arrayA = new double[capacity];
	}

	PFArrayD::PFArrayD(const int capacityValue) : capacity(capacityValue), used(0)
	{
		arrayA = new double[capacity];
	}

	PFArrayD::PFArrayD(const PFArrayD& pfaObject) : capacity(pfaObject.capacity), used(pfaObject.used)
	{
		arrayA = new double[capacity];
		for (int idx = 0; idx < pfaObject.used; idx++)
			arrayA[idx] = pfaObject.arrayA[idx];
	}

	PFArrayD& PFArrayD::operator =(const PFArrayD& rightSide)
	{
		if (this == &rightSide)	return *this;

		if (capacity != rightSide.capacity)
		{
			delete [] arrayA;
			arrayA = new double[rightSide.capacity];
		}

		capacity = rightSide.capacity;
		used = rightSide.used;
		for (int idx = 0; idx < rightSide.used; idx++)
			arrayA[idx] = rightSide.arrayA[idx];

		return *this;
	}

	PFArrayD::~PFArrayD()
	{
		delete [] arrayA;
	}

	void PFArrayD::addElement(const double element)
	{
		if (used >= capacity)
		{
			std::cout << "Attempt to exceed capacity in PFArrayD.\n";
			std::exit(1);
		}
		arrayA[used] = element;
		used++;
	}

	int PFArrayD::getCapacity() const { return capacity; }

	int PFArrayD::getNumberUsed() const { return used; }

	void PFArrayD::emptyArray() { used = 0; }

	bool PFArrayD::full() const { return (used == capacity); }

	double& PFArrayD::operator [](const int idx) const
	{
		if (idx >= used)
		{
			std::cout << "Illegal index in Partially Filled array of doubles\n";
			std::exit(1);
		}
		return arrayA[idx];
	}

} // myNamespace
