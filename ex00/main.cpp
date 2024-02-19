#include "Zombie.hpp"

int main(int argc, char **argv)
{
	Zombie*		obj;
	std::string	name;

	if (argc == 2)
	{
		name = argv[1];
		obj = newZombie(name);
		obj->announce();
		randomChump(name);
		delete obj;
	}
	return 0;
}
