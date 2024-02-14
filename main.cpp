#include "Zombie.hpp"

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

int main(int argc, char **argv)
{
	Zombie*		obj;
	std::string	name;

	if (argc == 2)
	{
		name = argv[1];
		obj = newZombie(name);
		randomChump(name);
		delete obj;
	}
	return 0;
}
