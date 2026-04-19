Explain the difference among the terms virtual function, late binding, and
polymorphism.

---

Polymorphism referes to the ability of associate different meanings to a function 
through the mechanism of late binding or dynamic binding.

Late or dynamic binding means that the compiler waits until runtime to determine 
the correct definition to apply to the calling object. 

In this way, the function that is defined in the base class is said to be virtual
because it can be used before it is defined.

So the virtual function is a way to tell the compiler to wait until execution and 
until the function is used in order to determine the right definition and 
implementation corresponding to the calling object.

---

From the manual:
In essence there is no difference among the three terms. They all refer to the same
topic. There is only a slight difference in their usage. (Virtual function is a kind
of member function; late binding refers to the mechanism used to decide which
function definition to use when a function is virtual; and polymorphism is another
name for late binding.)

Late binding means that the decision of which version of a member function is
appropriate is decided at run time. In C++, member functions that use late binding
are called virtual functions. Polymorphism is another word for late binding.