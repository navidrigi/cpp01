#pragma once

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string, Weapon &);
		~HumanA();
		void	attack(void);

	private:
		std::string name;
		std::string weapon;
};
