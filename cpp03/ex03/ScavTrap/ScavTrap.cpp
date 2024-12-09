/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:16:45 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/09 16:38:32 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "??? Scavtrap created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "Scavtrap " << name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scavtrap " << getName() << " destroyed" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	if (this != &rhs)
	{
		setName(rhs.getName());
		setHitPoints(rhs.getHitPoints());
		setEnergyPoints(rhs.getEnergyPoints());
		setAttackDamage(rhs.getAttackDamage());
		std::cout << "Scavtrap " << rhs << " created" << std::endl;
	}
	return *this;
}

// action
void ScavTrap::attack(const std::string &target)
{
	if (!getHitPoints())
		return;
	setEnergyPoints(getEnergyPoints() - 1);
	std::cout << "Scavtrap " << getName() << " attacks " << target
			  << ", causing " << getAttackDamage() << " points of damage"
			  << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "Scavtrap " << getName() << " is now in Gate keeper mode"
			  << std::endl;
}

std::ostream &operator<<(std::ostream &o, ScavTrap const &rhs)
{
	o << rhs.getName();
	return o;
}
