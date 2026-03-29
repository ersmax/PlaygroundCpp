//  Give a definition for a class SmartBut that is a derived class of the base class
// Smart given in the following.Do not bother with #include directives or
// namespace details.
//
// This class should have an additional data field, crazy, of type bool; one
// additional member function that takes no arguments and returns a value of type
// bool; and suitable constructors.The new function is named isCrazy.You do
// not need to give any implementations, just the class definition.

#ifndef SMART_14_02_H
#define SMART_14_02_H

namespace myNamespace
{
	class Smart
	{
	public:
		Smart();
		void printAnswer() const;
		void setValues(int newA, int newB);
		int getA() const;
		int getB() const;
	protected:
		int a;
		int b;
	};
} // myNamespace

#endif