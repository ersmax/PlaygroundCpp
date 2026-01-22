/* 
Could the function defined as follows be added to the class Server in
Display 7.6 as a static function ? Explain your answer.

void Server::showStatus()
{
	cout << "Currently serving " << turn << endl;
	cout << "server name " << name << endl;
}
*/

// No, because the function refers `name` object
//   Formally:
// No, it cannot be a static member function because it requires a calling object for
// the member variable name.

int main( )
{
	return 0;
}