#pragma once

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string);
		~HumanB();
		void	attack(void);
		void	setWeapon(Weapon &);

	private:
		std::string name;
		Weapon		*weapon;
};
