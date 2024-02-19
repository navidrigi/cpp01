#include "Harl.hpp"

typedef	void	(Harl::*ptr)();

void	Harl::complain( std::string level )
{
	(void) level;

	for (int i = 0; i < 4; i++)
		(this->*(ptrToPrivateFunctions[i]))();
}

void	Harl::debug( void )
{
	std:: string	message;

	message = "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!";
	std::cout << std::endl
			  << "\033[35m------  DEBUG  ------\033[0m"
			  << std::endl
			  << message
			  << std::endl
			  << std::endl;
}

void	Harl::info( void )
{
	std:: string	message;

	message = "I cannot believe adding extra bacon costs more money. You didn’t put "
				"enough bacon in my burger! If you did, I wouldn’t be asking for more!";
	std::cout << "\033[35m------  INFO  ------\033[0m"
			  << std::endl
			  << message
			  << std::endl
			  << std::endl;
}

void	Harl::warning( void )
{
	std:: string	message;

	message = "I think I deserve to have some extra bacon for free. I’ve been coming for "
				"years whereas you started working here since last month.";
	std::cout << "\033[35m------  WARNING  ------\033[0m"
			  << std::endl
			  << message
			  << std::endl
			  << std::endl;
}

void	Harl::error( void )
{
	std:: string	message;

	message = "This is unacceptable! I want to speak to the manager now.";
	std::cout << "\033[35m------  ERROR  ------\033[0m"
			  << std::endl
			  << message
			  << std::endl
			  << std::endl;
}

Harl::Harl()
{
	ptrToPrivateFunctions[0] = &Harl::debug;
	ptrToPrivateFunctions[1] = &Harl::info;
	ptrToPrivateFunctions[2] = &Harl::warning;
	ptrToPrivateFunctions[3] = &Harl::error;
}

Harl::~Harl()
{
}
