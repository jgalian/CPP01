#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char *argv[])
{
	size_t	pos;

	if (argc != 4)
	{
		std::cout << "Incorrect number of arguments" << std::endl;
		return (-1);
	}
	if (!strcmp(argv[2], "") || !strcmp(argv[3], ""))
		{
		std::cout << "Strings passed to the program should have content" << std::endl;
		return (-1);
	}
	std::ifstream file(argv[1]);
	if (!file.is_open())
	{
		std::cout << "File doesn't exist" << std::endl;
		return (-1);
	}
	std::string str = argv[1];
	std::ofstream new_file(str.append(".replace"));
	if (!new_file.is_open())
	{
		std::cout << "Error opening the file" << std::endl;
		return (-1);
	}
	while (getline(file, str))
	{
		while ((pos = str.find(argv[2])) != std::string::npos)
		{
			str.erase(pos, strlen(argv[2]));
			str.insert(pos, argv[3]);
		}
		new_file << str << std::endl;
	}
	file.close();
	new_file.close();
	return (0);
}
