/*
Answer these questions about destructors.
a. What is a destructor and what must the name of a destructor be?
b. When is a destructor called?
c. What does a destructor actually do?
d. What should a destructor do?
*/

/*
a. A destructor is a member function that deallocate the memory on the heap
	allocated for dynamic variables created for the object of the class.
	The name should be the same of the name of class preceeded by ~
b. The destructor is called just before the function containing the object
	goes out of the scope, or before the object of the class gets destroyed
c. It returns the memory allocated to dynamic variables to the freestore manager
d. It should return all the memory that has been allocated to all dynamic variables
*/

// Formally:
/*
a. A destructor is a member function of a class. A destructor’s name always begins
   with a tilde, ~, followed by the class name.
b. A destructor is called when a class object goes out of scope.
c. A destructor actually does whatever the class author programs it to do!
d. A destructor is supposed to delete dynamic variables that have been allocated by
   constructors for the class. Destructors may also do other clean-up tasks.
*/

int main( )
{
	return 0;
}