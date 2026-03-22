/*
Would the program in Display 11.10 behave any differently if you replaced the
four using declarations
using std::cout;
using std::cin;
using std::endl;
using DTimeSavitch::DigitalTime;
with the following two using directives?
using namespace std;
using namespace DTimeSavitch;
*/

//   The program works because readHour in the implementation file is 
// in an unnamed namespace (local to that file), while in the application file 
// it is in the global namespace.
// Since these are separate scopes and the implementation file does not include 
// or use the application's global readHour, there is no conflict.


// Formally: 
//   The program would behave exactly the same.However, most authorities favor using
// the using declaration, as we have done in Display 11.10.Note that with either,
// there are still two different functions named readHour.The one in Display 11.10
// is different from the one defined in the unnamed namespace in Display 11.9.

int main( )
{
	return 0;
}