Given the definition of the class Employee in Display 15.6, which of the
following are legal?
```cpp
a.	Employee joe;
	joe = Employee( );
b.	class HourlyEmployee : public Employee
	{
	public:
		HourlyEmployee( );
		<Some more legal member function definitions, none of which are
		pure virtual functions>
	private:
		double wageRate;
		double hours;
	};
	int main( )
	{
		Employee joe;
		joe = HourlyEmployee( );

c. bool isBossOf(const Employee& e1, const Employee& e2);
```

---

a. would be illegal, since an abstract class cannot have objects created from it
b. it is legal, since the constructor `HourlyEmployee()` create an object of that class,
	which is also of type Employee
c. It is legal, since the abstract class is also a type, and we can write code with parameters
	of the abstract class type and it will apply to all objects of classes that are 
	descendants of the abstract class.