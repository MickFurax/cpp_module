/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:07:42 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/10 16:13:30 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("???")
{
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string const &name) : name(name)
{
	std::cout << "Character constructor called with name " << name << std::endl;
}

Character::Character(const Character &src)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = src;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
}

Character &Character::operator=(Character const &rhs)
{
	std::cout << "Character assignment operator called" << std::endl;
	if (this != &rhs)
	{
		// this->_value = rhs.getValue();
	}
	return *this;
}

std::string const &Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria *m)
{
	(void)m;
}

void Character::unequip(int idx)
{
	(void)idx;
}

void Character::use(int idx, ICharacter &target)
{
	(void)idx;
	(void)target;
}


std::ostream &operator<<(std::ostream &o, Character const &i)
{
	(void)i;
	// o << "Value = " << i.getValue();
	return o;
}
