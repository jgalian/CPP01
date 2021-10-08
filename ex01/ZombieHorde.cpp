#include "moar_brainz.h"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie 			*ret;
	unsigned short	i;
	unsigned short	j;
	std::string		number;

	if (N < 0)
		return (NULL);
	ret = new Zombie[N];
	if (!ret)
		return (NULL);
	i = 0;
	while (++i <= N)
	{
		number = std::to_string(i);
		ret[i - 1].setName(name.append(number));
		j = number.length();
		while (j-- > 0)
			name.pop_back();
	}
	return (ret);
}
