/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:56:06 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/28 10:56:07 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("???"), hit_points(10), energy_points(10),
					   attack_damage(0)
{
	std::cout << "??? Claptrap created" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hit_points(10),
									   energy_points(10), attack_damage(0)
{
	std::cout << "Claptrap " << name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap " << name << " destroyed" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	if (this != &rhs)
	{
		setName(rhs.getName());
		setHitPoints(rhs.getHitPoints());
		setEnergyPoints(rhs.getEnergyPoints());
		setAttackDamage(rhs.getAttackDamage());
		std::cout << "Claptrap " << rhs << " created" << std::endl;
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &o, ClapTrap const &rhs)
{
	o << rhs.getName();
	return (o);
}

// action
void ClapTrap::attack(const std::string &target)
{
	if (!getHitPoints())
		return;
	setEnergyPoints(getEnergyPoints() - 1);
	std::cout << "Claptrap " << getName() << " attacks " << target
			  << ", causing " << getAttackDamage() << " points of damage"
			  << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (!getHitPoints())
		return;
	setHitPoints(getHitPoints() - amount);
	if (getHitPoints() <= 0)
		setHitPoints(0);
	std::cout << "Claptrap " << getName() << " gets hit and loses " << amount << " HP" << std::endl;
	std::cout << "Claptrap " << getName() << " has " << getHitPoints() << " HP" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (!getHitPoints())
		return;
	setHitPoints(getHitPoints() + amount);
	setEnergyPoints(getEnergyPoints() - 1);
	std::cout << "Claptrap " << getName() << " repairs and regains " << amount << " HP" << std::endl;
	std::cout << "Claptrap " << getName() << " has " << getHitPoints() << " HP" << std::endl;
}

// getter
std::string ClapTrap::getName(void) const
{
	return (this->name);
}

int ClapTrap::getHitPoints(void) const
{
	return (this->hit_points);
}

int ClapTrap::getEnergyPoints(void) const
{
	return (this->energy_points);
}

int ClapTrap::getAttackDamage(void) const
{
	return (this->attack_damage);
}

// setter
void ClapTrap::setName(std::string name)
{
	this->name = name;
}

void ClapTrap::setHitPoints(int hit_points)
{
	this->hit_points = hit_points;
}

void ClapTrap::setEnergyPoints(int energy_points)
{
	this->energy_points = energy_points;
}

void ClapTrap::setAttackDamage(int attack_damage)
{
	this->attack_damage = attack_damage;
}
