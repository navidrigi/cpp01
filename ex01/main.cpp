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
		if (num <= 0)
		{
			std::cout << "Number should be greater than 0" << std::endl;
			exit (1);
		}
		name = argv[2];
		obj = zombieHorde(num, name);
		for (int i = 0; i < num; i++)
			obj[i].announce();
		delete[] obj;
	}
	else
		std::cout << "\033[31m"
				  << "Usage: ./horde <number> <name>"
				  << "\033[0m"
				  << std::endl;
	return 0;
}
