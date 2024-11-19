/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:20:42 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/19 10:38:45 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type)
{
}

Weapon::~Weapon()
{
}

const std::string Weapon::getType()
{
    const std::string &type = this->type;
    return (type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}
