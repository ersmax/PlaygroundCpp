What is the problem with the (legal) assignment of a derived class object to a
base class variable?

---
Slicing problem.
Any member functions that is not inherited from the base class will be lost 
after the assignment. In addition, any member variable that is not inherited
will be lost as well upon assignment.
Any data members and functions that are not also in the base class will be
lost in the assigment basically.

---
From the manual:
Although it is legal to assign a derived class object to a base class variable, 
this discards the parts of the derived class object that are not members
of the base class.
This situation is known as the slicing problem.