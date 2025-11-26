/*
What is the error in the following structure definition ?
struct Stuff
{
	int b;
	int c;
}
int main()
{
	Stuff x;
	// other code
}
*/

//   Comma is mising. Struct needs it because definition and 
// declaration could be joined.

int main( )
{
	return 0;
}