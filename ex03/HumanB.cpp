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
	if (this->_weapon == NULL)
	{
		std::cout << this->_name << " don't have weapon to attack with" << std::endl;
		return ;
	}
	std::cout << this->_name
			<< " attacks with his "
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
