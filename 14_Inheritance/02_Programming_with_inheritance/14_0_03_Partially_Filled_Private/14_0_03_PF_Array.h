//   This is the heades file 14_0_03_PF_Array.h.
// This is the interface for the class PFArrayD.
// Objects of this type are partially filled arrays of doubles.

#ifndef PF_ARRAY_14_0_03_H
#define PF_ARRAY_14_0_03_H

typedef double *DoublePtr;

namespace myNamespace
{
	class PFArrayD
	{
	public:
		PFArrayD();
		//   Postcondition: Initialize the array with capacity of 50
		PFArrayD(int capacityValue);
		PFArrayD(const PFArrayD& pfaObject);
		//   Precondition: copy constructor
		~PFArrayD();
		PFArrayD& operator =(const PFArrayD& rightSide);
		//   Postcondition: change the L-Value with the values of the object rightSide
		void addElement(double element);
		//   Precondition: the array is not full
		//   Postcondition: The element has been added
		bool full() const;
		//   Postcondition: returns true if the array is full, false otherwise
		int getCapacity() const;
		int getNumberUsed() const;
		void setNumberUser(int nUsed);
		void emptyArray();
		//   Postcondition: resets the number used to zero, emptying the array.
		double& operator [](int idx) const;
		//   Postcondition: read and change access to elements 0 through used-1

	private:
		DoublePtr arrayA;	
		//   Precondition: pointer to an array of doubles
		int capacity;
		//   Precondition: size of the array
		int used;
		//   Precondition: number of array positions currently in use.
	};


} // myNamespace

#endif // PF_ARRAY_14_0_03_H