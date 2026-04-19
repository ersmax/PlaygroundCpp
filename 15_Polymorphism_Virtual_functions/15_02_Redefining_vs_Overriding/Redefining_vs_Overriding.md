Suppose you modify the definition of the class Sale (Display 15.1) by deleting
the reserved word virtual. How would that change the output of the program
in Display 15.5?

---
Without the modifier `virtual` the member function `bill()` would become a 
simple member function in the base class.
In the derived classes, the function `bill()` would be simply redefined.
Upon calling the inherited functions `savings` and 
the inherited overloaded `operator <`, which use `bill()`, they will call the 
base class member function `bill()` of the base class and not the overriden `bill()` 
as in late binding.
This is because there is no polymorphism: 
the compiler binds the function call at compile time, not runtime, 
because the function is not virtual. 
Hence, the compiler does not know the existence of the `bill()` functions 
in the derived classes because it was not instructed to wait until the execution 
to determine the correct definition or implementation of `bill()` to use.

--- 
From the manual:
The output would change to the following:
Discounted item is not cheaper.