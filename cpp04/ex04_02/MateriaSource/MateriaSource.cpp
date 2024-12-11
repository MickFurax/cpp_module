/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:58:04 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/11 15:49:41 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->materia[i] = NULL;
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = src;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	std::cout << "MateriaSource assignment operator called" << std::endl;
	if (this != &rhs)
	{
		// this->_value = rhs.getValue();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;

	while (i < 4 && this->materia[i])
		i++;
	if (i < 4)
		this->materia[i] = m;
}
AMateria *MateriaSource::createMateria(std::string const &type)
{
	(void)type;
	return NULL;
}

std::ostream &operator<<(std::ostream &o, MateriaSource const &i)
{
	(void)i;
	// o << "Value = " << i.getValue();
	return o;
}
