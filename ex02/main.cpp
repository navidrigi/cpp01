#include <iostream>

int main()
{
	// declarations + initializations
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	// printing addresses
	std::cout << &str << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	// printing values
	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	return 0;
}

// references advantages:
// 1. simplicty: no need to dereference
// 2. safer to use: they are initialized by declaration, so cannot be NULL, and cannot point to somewhere else
// 3. functions use cases: they can be passed to functions and get modified, and function can return multiple values
// 4.
