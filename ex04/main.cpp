#include <iostream>
#include <fstream>
#include <string.h>
#include <strings.h>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string original = argv[1];
		std::string replace = original + ".replace";
		std::ifstream file1;
		std::ofstream file2;
		file1.open(original.c_str());
		file2.open(replace.c_str());

		std::string read;
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		size_t s1_len = s1.size();
		// size_t s2_len = s2.size();
		size_t index;
		size_t i = 0;
		int new_line = 0;

		while (std::getline(file1, read))
		{
			if (read.size())
				new_line = 1;
			while (read[i]) // until end of line
			{
				i = 0;
				index = read.find(s1);
				if (index == read.npos)
					break;
				else
				{
					while (i < index)
						file2 << read[i++];
				}
				read = read.substr(index + s1_len);
				file2 << s2;
			}
			while (i < read.size())
				file2 << read[i++];
			if (new_line)
				file2 << std::endl;
			new_line = 0;
		}
		// while (std::getline(file2, read))
		// 	std::cout << read << std::endl;
		file1.close();
		file2.close();
	}
}
