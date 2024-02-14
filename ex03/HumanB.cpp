#include "HumanB.hpp"

HumanB::HumanB(std::string str1)
{
	name = str1;
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	std::cout << name
			  << " attacks with their "
			  << weapon
			  << std::endl;
}

void	HumanB::setWeapon(Weapon object)
{
	weapon = object.getType();
}
