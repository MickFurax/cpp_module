/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:16:16 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/09 17:21:04 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap()
{
	FragTrap fragtrap(name + "_frag_name");
	ScavTrap scavtrap(name + "_scav_name");

	setHitPoints(fragtrap.getHitPoints());
	setEnergyPoints(scavtrap.getEnergyPoints());
	setAttackDamage(fragtrap.getAttackDamage());
	std::cout << "??? DiamondTrap created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap((name + "_clap_name")),
											 FragTrap((name + "_clap_name")),
											 ScavTrap((name + "_clap_name")),
											 name(name)
{

	FragTrap fragtrap("Temporary");
	ScavTrap scavtrap("Temporary");

	setHitPoints(fragtrap.getHitPoints());
	setEnergyPoints(scavtrap.getEnergyPoints());
	setAttackDamage(fragtrap.getAttackDamage());
	std::cout << "DiamondTrap " << name << " created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
	*this = src;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << getName() << " destroyed" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs)
{
	if (this != &rhs)
	{
		setName(rhs.getName());
		setHitPoints(rhs.getHitPoints());
		setEnergyPoints(rhs.getEnergyPoints());
		setAttackDamage(rhs.getAttackDamage());
		std::cout << "DiamondTrap " << rhs << " created" << std::endl;
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, DiamondTrap const &rhs)
{
	o << rhs.getName();
	return o;
}

// action
void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "Hello, " << "my name is " << this->name << " and my ClapTrap name is " << ClapTrap::getName() << std::endl;
}

// getter
std::string DiamondTrap::getName(void) const
{
	return (this->name);
}

// setter
void DiamondTrap::setName(std::string name)
{
	this->name = name;
}
