#include <iostream>
#include <fstream>
#include <string.h>
#include <strings.h>

int isEndNewline(std::string original);

int main(int argc, char **argv)
{
	size_t		i;
	int			new_line = 0;
	std::string	read;
	size_t		index;

	if (argc == 4)
	{
		std::string original = argv[1];
		std::string replace = original + ".replace";
		std::ifstream file1;
		std::ofstream file2;
		file1.open(original.c_str()); // open needs const char *
		if (!file1.is_open())
		{
			std::cerr << "\033[1;31mError: File could not be opened\033[0m" << std::endl;
			return 1;
		}
		file2.open(replace.c_str());
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		size_t s1_len = s1.size();
		while (std::getline(file1, read))
		{
			i = 0;
			if (new_line)
				file2 << std::endl;
			while (read[i])
			{
				i = 0;
				index = read.find(s1);
				if (index == read.npos) // couldn't find
					break;
				else
				{
					while (i < index)
						file2 << read[i++];
				}
				read = read.substr(index + s1_len);
				file2 << s2;
			}
			while (i < read.size()) // after last occurence till the end of line
				file2 << read[i++];
			new_line = 1;
		}
		if (isEndNewline(original))
			file2 << std::endl;
		file1.close();
		file2.close();
	}
	else
		std::cout << "\033[1;31mExecute like this: ./sed fileName oldString newString\033[0m" << std::endl;
	return 0;
}

int isEndNewline(std::string original)
{
	char			current;
	char			last;
	std::ifstream	file;

	file.open(original.c_str());
	while (file.get(current))
		last = current;
	file.close();
	if (last == '\n')
		return 1;
	return 0;
}
