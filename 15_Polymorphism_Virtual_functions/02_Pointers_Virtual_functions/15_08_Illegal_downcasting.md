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
From the manual:
Since Dog can have more member variables than Pet, the object vpet may not have
enough data for all the member variables of type Dog.