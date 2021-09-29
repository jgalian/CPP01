#include "brainz.h"

void randomChump( std::string name )
{
	Zombie *Z;

	Z = newZombie(name);
	Z->announce();
}
