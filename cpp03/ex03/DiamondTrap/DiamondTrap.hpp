/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:16:24 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/28 13:32:29 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "../ClapTrap/ClapTrap.hpp"
#include "../FragTrap/FragTrap.hpp"
#include "../ScavTrap/ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string name;

public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &src);
	~DiamondTrap();

	DiamondTrap &operator=(DiamondTrap const &rhs);

	// action
	void attack(const std::string &target);
	void whoAmI(void);

	// getter
	std::string getName(void) const;
	int getHitPoints(void) const;
	int getEnergyPoints(void) const;
	int getAttackDamage(void) const;

	// setter
	void setName(std::string name);
	void setHitPoints(int hit_points);
	void setEnergyPoints(int energy_points);
	void setAttackDamage(int attack_damage);
};

std::ostream &operator<<(std::ostream &o, DiamondTrap const &i);

#endif