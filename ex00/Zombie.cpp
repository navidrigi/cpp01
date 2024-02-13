#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << "Enter a name: ";
	std::getline(std::cin, name);
	std::cout << name
			  << "BraiiiiiiinnnzzzZ..."
			  << std::endl;
}
