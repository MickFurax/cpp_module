/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:16:16 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/28 17:30:37 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap()
{
	std::cout << "??? DiamondTrap created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap((name + "_clap_name")),
											 ScavTrap((name + "_clap_name")),
											 name(name)
{
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
	std::cout << "Hello, " << "my name is " << this->name << " and my ClapTrap name is " << FragTrap::getName() << std::endl;
}

// getter
std::string DiamondTrap::getName(void) const
{
	return (this->name);
}

int DiamondTrap::getHitPoints(void) const
{
	return (FragTrap::getHitPoints());
}

int DiamondTrap::getEnergyPoints(void) const
{
	return (ScavTrap::getEnergyPoints());
}

int DiamondTrap::getAttackDamage(void) const
{
	return (FragTrap::getAttackDamage());
}

// setter
void DiamondTrap::setName(std::string name)
{
	this->name = name;
}

void DiamondTrap::setHitPoints(int hit_points)
{
	FragTrap::setHitPoints(hit_points);
}

void DiamondTrap::setEnergyPoints(int energy_points)
{
	ScavTrap::setEnergyPoints(energy_points);
}

void DiamondTrap::setAttackDamage(int attack_damage)
{
	FragTrap::setAttackDamage(attack_damage);
}
