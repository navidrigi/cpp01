#pragma once

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		void	attack(void);
		void	setWeapon(Weapon &weapon);

	private:
		std::string name_;
		Weapon		*weapon_;
};
