#include "Zombie.hpp"

int main(int argc, char **argv)
{
	Zombie		*obj;
	int			num;
	std::string	name;

	if (argc == 3)
	{
		std::stringstream ss(argv[1]);
		ss >> num;
		name = argv[2];
		obj = zombieHorde(num, name);
		for (int i = 0; i < num; i++)
			obj[i].announce();
		delete[] obj;
	}
	return 0;
}
