/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:30:41 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/09 17:31:27 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAAnimal::WrongAAnimal()
{
	std::cout << "WrongAAnimal constructor called" << std::endl;
}

WrongAAnimal::WrongAAnimal(std::string type) : type(type)
{
	std::cout << "WrongAAnimal constructor called with type " << type << std::endl;
}

WrongAAnimal::WrongAAnimal(const WrongAAnimal &src)
{
	std::cout << "WrongAAnimal copy constructor called" << std::endl;
	*this = src;
}

WrongAAnimal::~WrongAAnimal()
{
	std::cout << "WrongAAnimal destructor called" << std::endl;
}

WrongAAnimal &WrongAAnimal::operator=(WrongAAnimal const &rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return *this;
}

void WrongAAnimal::makeSound() const
{
	std::cout << "WrongAAnimal sound" << std::endl;
}

std::string WrongAAnimal::getType() const
{
	return this->type;
}

std::ostream &operator<<(std::ostream &o, WrongAAnimal const &i)
{
	o << "Value = " << i.getType();
	return o;
}
