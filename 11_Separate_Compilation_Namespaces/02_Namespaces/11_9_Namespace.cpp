/*   Write the declaration(prototype) for a void function named wow.
   The function wow has two parameters, the first of type speed as defined in the
   speedway namespace and the second of type speed as defined in the indy500
   namespace.
*/

namespace speedway
{
	typedef double speed;
}

namespace indy500
{
	typedef double speed;
}

void wow(speedway::speed s1, indy500::speed s2);

int main( )
{
	return 0;
}