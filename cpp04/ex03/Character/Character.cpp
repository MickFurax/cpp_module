/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:35:10 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/12 10:03:54 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("???")
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string const &name) : name(name)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	std::cout << "Character constructor called with name " << name << std::endl;
}

Character::Character(const Character &src)
{
	std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (src.inventory[i])
		{
			this->inventory[i] = src.inventory[i]->clone();
			delete src.inventory[i];
		}
	}
	*this = src;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
	std::cout << "Character destructor called" << std::endl;
}

Character &Character::operator=(Character const &rhs)
{
	std::cout << "Character assignment operator called" << std::endl;
	if (this != &rhs)
		this->name = rhs.getName();
	return *this;
}

std::string const &Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria *m)
{
	if (!m)
		return;
	int i = 0;

	while (i < 4 && this->inventory[i])
		i++;
	if (i < 4)
	{
		this->inventory[i] = m;
		std::cout << getName() << " equipped at index " << i << std::endl;
	}
}

void Character::unequip(int idx)
{
	if (idx < 4)
		this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (!this->inventory[idx])
		return;
	if (idx < 4)
		this->inventory[idx]->use(target);
}

std::ostream &operator<<(std::ostream &o, Character const &i)
{
	o << i.getName();
	return o;
}