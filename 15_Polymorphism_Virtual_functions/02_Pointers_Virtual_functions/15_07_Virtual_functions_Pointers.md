Suppose the base class and the derived class each has a member function with
the same signature. When you have a base class pointer to a derived class object
and call a function member through the pointer, discuss what determines which
function is actually called, the base class member function or the derived class
member function.

---

If the function is not declared virtual in the base class, 
then calling the function through a base class pointer will always invoke 
the base class version (static binding), even if the pointer points to 
a derived class object (the function is redefined and not overriden). 
If the function is declared virtual in the base class 
and overridden in the derived class, then calling the function 
through a base class pointer will invoke the derived class version (dynamic binding), 
because the function call is resolved at runtime based on the actual object type.

--- 
From the manual:
If the base class function carries the virtual modifier, then the derived class member
function is called. If the base class member function does not have the virtual
modifier, then the base class member function is called.