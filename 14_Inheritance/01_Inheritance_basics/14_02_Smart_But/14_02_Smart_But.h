#ifndef SMART_BUT_14_02_H
#define SMART_BUT_14_02_H

#include "14_02_Smart.h"

namespace myNamespace
{
	class SmartBut : public Smart
	{
	public:
		SmartBut();
		SmartBut(int newA, int newB, bool newStatus);
		bool isCrazy() const;
	private:
		bool crazy;
	};
} // myNamespace

#endif
