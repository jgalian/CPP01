#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		void		attack(void);
		std::string	getName(void) const;
		void		setName(std::string name);
		void		setWeapon(Weapon &weapon);

	private:
		std::string	_name;
		Weapon *	_weapon;
};

#endif
