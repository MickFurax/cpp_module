/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 09:54:30 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/16 19:03:41 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Materia default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "Materia constructor called with type " << type << std::endl;
	this->type = type;
}

AMateria::AMateria(const AMateria &src)
{
	std::cout << "Materia copy constructor called" << std::endl;
	*this = src;
}

AMateria::~AMateria()
{
	std::cout << "Materia destructor called" << std::endl;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
	std::cout << "Materia assignment operator called" << std::endl;
	if ( this != &rhs )
		this->type = rhs.getType();
	return *this;
}

std::string const &AMateria::getType() const
{
	return this->type;
}

void AMateria::setType(std::string const &type)
{
	this->type = type;
}

void AMateria::use(ICharacter &target)
{
	std::cout << "Materia is used on " << target.getName() << std::endl;
}
