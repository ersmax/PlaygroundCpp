Why can’t you assign a base class object to a derived class variable?

---

Because it is not necessarily true that a base class is of the same type
of that of a derived class. A Pet may not be necessarily a Cat, but a Dog,
a Fish etc.

---
From the manual:
There would be no members to assign to the derived class’s added members.