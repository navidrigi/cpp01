#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl		obj;

	if (argc == 1)
		obj.complain("");
	else if (argc == 2)
		obj.complain(argv[1]);
	else
	{
		std::cout << "\033[1;31mToo many args\033[0m" << std::endl;
		return 1;
	}
	return 0;
}
