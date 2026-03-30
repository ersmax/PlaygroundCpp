//   This is the file 14_0_03_PF_Array_Backup.cpp.
// This is the implementation file of the class PFArrayDBack.
// The interface for the class PFArrayDBack is in the file 14_0_02_PF_Array_Backup.h.

#include "14_0_03_PF_Array_Backup.h"

namespace myNamespace
{
	PFArrayDBack::PFArrayDBack() : PFArrayD(), usedB(0)
	{
		arrayB = new double[getCapacity()];
	}

	PFArrayDBack::PFArrayDBack(const int capacityValue) : PFArrayD(capacityValue), usedB(0)
	{
		arrayB = new double[getCapacity()];
	}

	PFArrayDBack::~PFArrayDBack()
	{
		delete [] arrayB;
	}

	PFArrayDBack::PFArrayDBack(const PFArrayDBack& anotherObject) : PFArrayD(anotherObject), 
	                                                                usedB(anotherObject.usedB)
	{
		arrayB = new double[getCapacity()];
		for (int idx = 0; idx < usedB; idx++)
			arrayB[idx] = anotherObject.arrayB[idx];
	}

	PFArrayDBack& PFArrayDBack::operator =(const PFArrayDBack& rightSide)
	{
		if (this == &rightSide)	return *this;
		
		int oldCapacity = getCapacity();
		PFArrayD::operator =(rightSide);
		if (oldCapacity != rightSide.getCapacity())
		{
			delete [] arrayB;
			arrayB = new double[rightSide.getCapacity()];
		}
		usedB = rightSide.usedB;
		for (int idx = 0; idx < rightSide.usedB; idx++)
			arrayB[idx] = rightSide.arrayB[idx];
		
		return *this;
	}

	void PFArrayDBack::backup()
	{
		
		usedB = getNumberUsed();
		for (int idx = 0; idx < usedB; idx++)
			arrayB[idx] = this->PFArrayD::operator [](idx); 
			// object.backup() means object[idx] which gives arrayA[idx]

		
		
		// usedB = getNumberUsed();
		// for (int idx = 0; idx < usedB; idx++)
		//	 arrayB[idx] = arrayA[idx];
	}

	void PFArrayDBack::restore()
	{
		emptyArray();
		for (int idx = 0; idx < usedB; idx++)
			addElement(arrayB[idx]);
		
		// Alternative implementation:
		//setNumberUser(usedB);
		//for (int idx = 0; idx < usedB; idx++)
		//	this->operator [](idx) = arrayB[idx];

		// Old implementation (protected member in base class):
		// used = usedB;
		// for (int idx = 0; idx < used; idx++)
		//	 arrayA[idx] = arrayB[idx];
	}

} // myNamespace
