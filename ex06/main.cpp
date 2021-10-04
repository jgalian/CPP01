#include "Karen.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Incorrect number of parameters passed to the program" << std::endl;
		return (-1);
	}
	Karen rubia;
	rubia.filter(argv[1]);
	return (0);
}
