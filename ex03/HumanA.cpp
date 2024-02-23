#include "HumanA.hpp"

HumanA::HumanA(std::string str1, Weapon &object) : name_(str1), weapon_(object)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << name_
			  << " attacks with their "
			  << weapon_.getType()
			  << std::endl;
}
