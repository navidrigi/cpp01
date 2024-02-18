#include "Harl.hpp"

typedef	void	(Harl::*ptr)();

void	Harl::complain( std::string level )
{
	(void)	level;
	Harl	obj;
	int		i;

	std::string	messages[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	ptr array[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	switch(i)
	{
		case(0):
			(obj.*array[0])();
		case(1):
			(obj.*array[1])();
		case(2):
			(obj.*array[2])();
		case(3):
			(obj.*array[3])();
			break;
	}
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
