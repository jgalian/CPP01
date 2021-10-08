#include "moar_brainz.h"

int	main()
{
	Zombie *zombies;
	int	n_zombies = 21;
	unsigned short	i = 0;

	zombies = zombieHorde(n_zombies, "malo");
	if (!zombies)
		return (-1);
	while (++i <= n_zombies)
		zombies[i - 1].announce();
	std::cout << std::endl;
	delete [] zombies;
	return (0);
}
