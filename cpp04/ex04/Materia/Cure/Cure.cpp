/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 09:15:12 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/10 16:14:53 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &src)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = src;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(Cure const &rhs)
{
	std::cout << "Cure assignment operator called" << std::endl;
	if ( this != &rhs )
	{
	// this->_value = rhs.getValue();
	}
	return *this;
}

AMateria *Cure::clone() const
{
	Cure *cure = new Cure();
	return (cure);
}

void Cure::use(ICharacter &target)
{
	(void)target;
	// std::cout << "★ heals " << target << "'s wounds ★" << std::endl;
}

std::ostream &operator<<(std::ostream &o, Cure const &i)
{
	(void)i;
	// o << "Value = " << i.getValue();
	return o;
}

