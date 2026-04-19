Is it legal to have an abstract class in which all member functions are pure virtual
functions?

---

Yes, and no objects can be created from abstract classes, although you can write code
with parameters of the abstract class because the abstract class is a type, 
and it will apply to all objects of classes that are descendants of the abstract class.