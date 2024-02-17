#include "Harl.hpp"

typedef	void	(Harl::*ptr)();

void	Harl::complain( std::string level )
{
	(void)	level;
	Harl	obj;

	ptr	ptr1 = &Harl::debug;
	ptr	ptr2 = &Harl::info;
	ptr	ptr3 = &Harl::warning;
	ptr	ptr4 = &Harl::error;
	(obj.*ptr1)();
	(obj.*ptr2)();
	(obj.*ptr3)();
	(obj.*ptr4)();
}

void	Harl::debug( void )
{
	std:: string	message;

	message = "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!";
	std::cout << "------  DEBUG  ------"
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
	std::cout << "------  INFO  ------"
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
	std::cout << "------  WARNING  ------"
			  << std::endl
			  << message
			  << std::endl
			  << std::endl;
}

void	Harl::error( void )
{
	std:: string	message;

	message = "This is unacceptable! I want to speak to the manager now.";
	std::cout << "------  ERROR  ------"
			  << std::endl
			  << message
			  << std::endl
			  << std::endl;
}

Harl::Harl()
{
}

Harl::~Harl()
{
}
