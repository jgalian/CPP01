# include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void	HumanB::attack(void)
{
	std::cout << this->_name
			<< " attacks wih his "
			<< this->_weapon->getType() << std::endl;
}

std::string	HumanB::getName(void) const
{
	return (this->_name);
}

void	HumanB::setName(std::string name)
{
	this->_name = name;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
