//   Consider the program shown in Display 11.5. Could we use the name greeting
// in place of bigGreeting ?

//  We cannot, because greeting() would be defined in namespaces Space1 and global namespace at the same time
// Ot in namespace Space2 and global namespace at the same time.
// Thus, it'd be impossible for the compiler to distinguish between different declarations when
// we use both namespaces at the same time.

/* Formally:
 * No. If you replace bigGreeting with greeting, you will have a definition for the
name greeting in the global namespace. There are parts of the program where all
the name definitions in the namespace Space1 and all the name definitions in the
global namespace are simultaneously available. In those parts of the program, there
would be two distinct definitions for
void greeting( );
*/

int  main()
{
	return 0;
}