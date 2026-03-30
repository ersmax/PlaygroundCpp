//   This is the header file 14_0_02_PF_Array_Backup.h.
// This is the interface for the class PFArrayDBack.
// Objects of this type are partially filled arrays of doubles.
//   This version allows the programmer to make a backup copy
// and restore to the last saved copy of the partially filled array.

#ifndef PF_Array_Backup_14_0_02_H
#define PF_Array_Backup_14_0_02_H

#include "14_0_02_PF_Array.h"

namespace myNamespace
{
	class PFArrayDBack : public PFArrayD
	{
	public:
		PFArrayDBack();
		//   Postcondition: Initializes the backup array with capacity of 50
		PFArrayDBack(int capacityValue);
		PFArrayDBack(const PFArrayDBack& object);
		//   Precondition: copy constructor
		~PFArrayDBack();
		PFArrayDBack& operator =(const PFArrayDBack& rightSide);
		void backup();
		//   Postcondition: makes a backup of the partially filled array.
		void restore();
		//   Postcondition: restores the partially filled array to the last saved version.
		// If backup has never been invoked, this empties the partially filled array.	

	private:
		DoublePtr ptrArrayB;
		int usedB;
	};
	
} // myNamespace

#endif // PF_Array_Backup_14_0_02_H

