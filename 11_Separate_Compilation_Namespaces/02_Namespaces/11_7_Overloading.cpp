//   In Self - Test Exercise 6, we saw that you could not add a definition for the
// following function to the global namespace :
// void greeting();
// Can you add a definition for the following function declaration to the global
// namespace ?
// void greeting(int howMany);


// Yes and the reason is that the function is overloaded

// Formally:
//   Yes.The additional definition would cause no problems because overloading is always
// allowed.When, for example, the namespace Space1 and the global namespace
// are available, the function name greeting would be overloaded.The problem in
// Self - Test Exercise 6 was that there would sometimes be two definitions of the function
// name greeting with the same parameter lists.

int main( )
{
	return 0;
}