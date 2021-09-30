#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA
{
	public:

		HumanA(std::string name, Weapon type);
		~HumanA();
		void	attack(void);
		std::string	getName() const;
		void		setName(std::string);
		Weapon	weapon;

	private:
		std::string	name;
}

#endif
