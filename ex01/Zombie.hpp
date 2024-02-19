#pragma once

#include <iostream>
#include <sstream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	SetName(std::string str);
	private:
		std::string	name;
};

Zombie	*zombieHorde( int N, std::string name );
