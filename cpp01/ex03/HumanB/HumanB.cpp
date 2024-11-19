/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:33:28 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/19 15:08:57 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
    this->weapon = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " is weaponless" << std::endl;
}

void HumanB::setWeapon(Weapon weapon)
{
    this->weapon = &weapon;
}