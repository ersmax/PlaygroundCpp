//   If a class definition includes one or more constructors,
// no constructor is generated automatically.
// If the defined constructors takes one or more arguments,
// but we don't declare a default constructor in the class definition,
// then there is no default constructor,
// and declaring an object such as `Class object` would be illegal.
//   This is because we ask the compiler to invoke the default constructor,
// but there is no default constructor.

class SampleClass
{
public:
	SampleClass(int parameter1, double parameter2);
	void doStuff();
private:
	int data1;
	double data2;
};

int main()
{
	SampleClass myVariable(7, 7.77);
	// SampleClass anObject;	// ILLEGAL: no default constructor has been defined.
	return 0;
}

SampleClass::SampleClass(int parameter1, double parameter2) 
						: data1(parameter1), data2(parameter2)
{}
