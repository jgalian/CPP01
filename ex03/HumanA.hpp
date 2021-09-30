#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon type);
		~HumanA();
		void		attack(void);
		std::string	getName(void) const;
		void		setName(std::string name);
		Weapon	weapon;

	private:
		std::string	name;
};

#endif
