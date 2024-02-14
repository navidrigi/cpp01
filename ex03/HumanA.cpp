#include "HumanA.hpp"

HumanA::HumanA(std::string str1, Weapon &object)
{
	name = str1;
	weapon = object.getType();
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << name
			  << " attacks with their "
			  << weapon
			  << std::endl;
}
