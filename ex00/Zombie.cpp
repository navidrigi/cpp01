#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie pops up"
			  << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie is gone..."
			  << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name
			  << ": BraiiiiiiinnnzzzZ..."
			  << std::endl;
}

void	Zombie::SetName(std::string str)
{
	name = str;
}
