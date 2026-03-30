//   This is the file 14_0_02_PF_Array_Backup.cpp.
// This is the implementation file of the class PFArrayDBack.
// The interface for the class PFArrayDBack is in the file 14_0_02_PF_Array_Backup.h.

#include "14_0_02_PF_Array_Backup.h"

namespace myNamespace
{
	PFArrayDBack::PFArrayDBack() : PFArrayD(), usedB(0)
	{
		arrayB = new double[capacity];
	}

	PFArrayDBack::PFArrayDBack(const int capacityValue) : PFArrayD(capacityValue), usedB(0)
	{
		arrayB = new double[capacity];
	}

	PFArrayDBack::~PFArrayDBack()
	{
		delete [] arrayB;
	}

	PFArrayDBack::PFArrayDBack(const PFArrayDBack& anotherObject) : PFArrayD(anotherObject), 
	                                                                usedB(anotherObject.usedB)
	{
		arrayB = new double[capacity];
		for (int idx = 0; idx < usedB; idx++)
			arrayB[idx] = anotherObject.arrayB[idx];
	}

	PFArrayDBack& PFArrayDBack::operator =(const PFArrayDBack& rightSide)
	{
		if (this == &rightSide)	return *this;
		
		int oldCapacity = capacity;
		PFArrayD::operator =(rightSide);
		if (oldCapacity != rightSide.capacity)
		{
			delete [] arrayB;
			arrayB = new double[rightSide.capacity];
		}
		usedB = rightSide.usedB;
		for (int idx = 0; idx < rightSide.usedB; idx++)
			arrayB[idx] = rightSide.arrayB[idx];
		
		return *this;
	}

	void PFArrayDBack::backup()
	{
		usedB = used;
		for (int idx = 0; idx < usedB; idx++)
			arrayB[idx] = arrayA[idx];
	}

	void PFArrayDBack::restore()
	{
		used = usedB;
		for (int idx = 0; idx < used; idx++)
			arrayA[idx] = arrayB[idx];
	}

} // myNamespace
