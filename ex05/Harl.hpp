#pragma once

#include <iostream>
#include <string>

class Harl
{
	public:
		Harl();
		~Harl();
		void complain( std::string level );
		void (Harl::*ptrToPrivateFunctions[4])();
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};
