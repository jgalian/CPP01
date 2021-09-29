#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>


class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void) const;

	private:
		std::string _name;

};

#endif
