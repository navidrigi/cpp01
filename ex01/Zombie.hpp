#pragma once

#include <iostream>
#include <sstream>
#include <cstdlib>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	SetName(std::string name);
	private:
		std::string	name_;
};

Zombie	*zombieHorde( int N, std::string name );
