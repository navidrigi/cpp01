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
	private:
		std::string	name;
};

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );
