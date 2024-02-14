#include "Zombie.hpp"
#include <strings.h>
#include <sstream>

Zombie* zombieHorde( int N, std::string name );

int main(int argc, char **argv)
{
	Zombie*		obj;
	int			num;
	std::string	name;

	if (argc == 3)
	{
		std::stringstream ss(argv[1]);
		ss >> num;
		name = argv[2];
		obj = zombieHorde(num, name);
		delete[] obj;
	}
	return 0;
}
