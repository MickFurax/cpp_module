/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:20:42 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/20 14:49:12 by arabeman         ###   ########.fr       */
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
    if (type.find_first_not_of(" ") != std::string::npos)
        this->type = type;
}
