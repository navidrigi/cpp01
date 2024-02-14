#pragma once

#include <iostream>
#include <strings.h>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	SetName(std::string str);
		// Zombie	*newZombie( std::string name );
		// void	randomChump( std::string name );
	private:
		std::string	name;
};
