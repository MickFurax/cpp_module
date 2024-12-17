/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:21:24 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/17 11:05:02 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &src): AMateria(src)
{
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(Cure const &rhs)
{
	std::cout << "Cure assignment operator called" << std::endl;
	if (this != &rhs)
		(void)rhs;
	return *this;
}

AMateria *Cure::clone() const
{
	std::cout << "Cure clone called" << std::endl;
	Cure *cure = new Cure();
	return (cure);
}

void Cure::use(ICharacter &target)
{
	std::cout << "★ heals " << target.getName() << "'s wounds ★" << std::endl;
}
