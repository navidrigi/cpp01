#include "HumanB.hpp"

HumanB::HumanB(std::string str1)
{
	name = str1;
	weapon = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	std::cout << name
			  << " attacks with their "
			  << weapon->getType()
			  << std::endl;
}

void	HumanB::setWeapon(Weapon &object)
{
	weapon = &object;
}
