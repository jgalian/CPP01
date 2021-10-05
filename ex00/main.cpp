#include "brainz.h"

int	main()
{
	Zombie	*melon;
	Zombie	*sandia;

	std::cout << "--- Zombies en Heap memory ---" << std::endl;
	melon = newZombie("Cabeza Melon");
	if (!melon)
		return (-1);
	melon->announce();
	sandia = newZombie("Cabeza Sandia");
	if (!sandia)
		return (-1);
	sandia->announce();
	std::cout << std::endl;
	std::cout << "--- Zombies en Stack memory ---" << std::endl;
	randomChump("Cabeza Cabra");
	randomChump("Cabeza Oveja");
	randomChump("Cabeza Vaca");
	std::cout << std::endl;
	std::cout << "--- Zombies en Heap memory beeing freed ---" << std::endl;
	delete melon;
	delete sandia;
}
