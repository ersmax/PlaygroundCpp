/*
When you define a class in separate files, there is an interface file and an
implementation file. Which of these files needs to be compiled? (Both?
Neither? Only one? If so, which one?)
*/

//   Only the implementation file needs to be compiled. The interface file does not
// need to be compiled.
// This is because the compiler thinks the contents of the interface file are already
// contained in the implementation file: the preprocessor reads in the implementation file
// the include directive for the interface header, and replaces it with the text in the 
// file header.

int main( )
{
	return 0;
}