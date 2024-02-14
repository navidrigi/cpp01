#pragma once

#include <iostream>

class Weapon
{
	public:
		Weapon(std::string str);
		~Weapon();
		std::string getType();
		void		setType(const std::string &type);

	private:
		std::string type;
};
