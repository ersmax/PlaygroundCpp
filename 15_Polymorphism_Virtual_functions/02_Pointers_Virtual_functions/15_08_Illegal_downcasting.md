Why is the following illegal?
Pet vpet;
Dog vdog; //Dog is a derived class with base class Pet.
. . .
vdog = static_cast(vpet); //ILLEGAL!

---

It is illegal because an object of a base class does not have
a definition for the additional member variables of the derived class.
We assume that information is being added (added member variables and functions)
when in reality it is not.

---
Virtual Functions Table
To solve the issue, we use polymorphism with virtual functions and pointers to dynamic variables
to avoid the slicing problem.
In short:
Virtual tables store pointers to virtual functions in a fixed order determined at compile time. 
Each class (base and derived) has its own virtual table.

Each object contains a hidden pointer (vptr) to the virtual table of its actual class.
When we use a base-class pointer that points to a derived-class object, 
the pointer type does not determine which function is called. 
Instead, the program follows the object’s vptr to the derived class’s virtual table.

Then, using a fixed index, it retrieves the correct function implementation in constant time and calls it.

Pointer → finds the object	(e.g. Pet *ppet = new Dog; ppet gives address of Dog object)
Object → finds the vtable	(e.g. Dog object has a virtual pointer that identificate the virtual functions table of Dog)
Vtable → finds the function	(e.g. Virtual functions table of Dog has indeces that allow to identify the correct overriden (or inherited) virtual function to use).


To recap, virtual tables store only the address (pointers) of virtual functions iin a fixed layout determined at compile time, 
and each each class (base or derived) has its own vtable.
Then it is not the type of pointer that determines which virtual table to call (e.g. Pet *pPet = new Dog; it is not Pet* that determines the virtual table to call). 
The pointer is used only to access the object.
The object’s vptr (virtual pointer) determines which vtable is used.

Each object of a class stores its (virtual) pointer (vptr) to its virtual functions table. 
When we use a pointer of base class type, which points to object of a derived class, 
we take the (virtual) pointer of the object of derived class that goes to the corresponding virtual functions table (derived class). 
Then, by indexing (with costant time) we find the correct implementation of the function at runtime.

--- 
From the manual:
Since Dog can have more member variables than Pet, the object vpet may not have
enough data for all the member variables of type Dog.