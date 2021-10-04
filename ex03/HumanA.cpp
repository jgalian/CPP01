# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	return ;
}

HumanA::~HumanA()
{
	return ;
}

void	HumanA::attack(void)
{
	std::cout << this->_name
			<< " attacks wih his "
			<< this->_weapon.getType() << std::endl;
}

std::string	HumanA::getName(void) const
{
	return (this->_name);
}

void	HumanA::setName(std::string name)
{
	this->_name = name;
}

