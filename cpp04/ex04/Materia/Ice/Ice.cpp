/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:21:24 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/11 19:32:13 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &src): AMateria(src)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = src;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice &Ice::operator=(Ice const &rhs)
{
	std::cout << "Ice assignment operator called" << std::endl;
	if (this != &rhs)
		(void)rhs;
	return *this;
}

AMateria *Ice::clone() const
{
	Ice *ice = new Ice();
	return (ice);
}

void Ice::use(ICharacter &target)
{
	std::cout << "★ shoots an ice bolt at " << target.getName() << " ★" << std::endl;
}

std::ostream &operator<<(std::ostream &o, Ice const &i)
{
	(void)i;
	o << "ice";
	return o;
}
