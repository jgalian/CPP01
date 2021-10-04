#include "Karen.hpp"

int	main(int argc, char *argv[])
{
	std::string options[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = -1;
	int level = -1;
	Karen rubia;

	if (argc != 2)
	{
		std::cout << "Incorrect number of parameters to the program" << std::endl;
		return (-1);
	}
	while (++i < 4)
	{
		if (options[i] == argv[1])
		{
			level = i;
			break ;
		}
	}
	rubia.complain(level);
	return (0);
}
