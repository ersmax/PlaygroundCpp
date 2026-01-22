// This program showcases the usage of static member variables and functions
#include <iostream>

//   Class representing a server that serves customers in turn
// Static members are used to keep track of the overall state across all instances  
class Server
{
public:
	Server(char letterName);
	static int getTurn();
	void serveOne(int groupN) const;
	static bool stillOpen();
private:
	static int turn;
	static int lastServed;
	static bool nowOpen;
	char name;
};

int Server::turn = 0;
int Server::lastServed = 0;
bool Server::nowOpen = true;

int main()
{
	const Server s1('A');
	const Server s2('B');
	int number;
	do
	{
		std::cout << "How many people in your group?\n";
		std::cin >> number;
		std::cout << "Your turns are: ";
		for (int count = 0; count < number; count++)
			std::cout << Server::getTurn() << ' ';
		std::cout << '\n';
		s1.serveOne(number);
		s2.serveOne(number);
	} while (Server::stillOpen());

	std::cout << "Now closing service\n";
	std::cout << '\n';
	return 0;
}

Server::Server(const char letterName) : name(letterName)
{ /* Intentionally left empty */ }

int Server::getTurn()
{
	turn++;
	return turn;
}

bool Server::stillOpen()
{
	return nowOpen;
}

void Server::serveOne(const int groupN) const
{
	if (nowOpen && lastServed < turn)
	{
		lastServed++;
		std::cout << "Server " << name
			<< " now serving " << lastServed << '\n';
	}
	if (lastServed >= turn && groupN == 0)	// everyone is served
		nowOpen = false;
}
