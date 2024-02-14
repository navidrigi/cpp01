#include "Zombie.hpp"

Zombie	*newZombie( std::string name )
{
	Zombie *zombie;

	zombie = new Zombie();
	zombie->SetName(name);
	zombie->announce();
	return zombie;
}
