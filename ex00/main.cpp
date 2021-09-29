#include "brainz.h"

int	main()
{
	Zombie	*Carlos;

	Carlos = newZombie("Carlos");
	Carlos->announce();
	randomChump("Javi");
	delete Carlos;
}
