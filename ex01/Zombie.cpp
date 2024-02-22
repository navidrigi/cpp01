#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie pops up"
			  << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name_
			  << " is gone..."
			  << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name_
			  << ": BraiiiiiiinnnzzzZ..."
			  << std::endl;
}

void	Zombie::SetName(std::string name)
{
	name_ = name;
}
