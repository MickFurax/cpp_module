/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:58:04 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/12 09:58:42 by arabeman         ###   ########.fr       */
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
	for (int i = 0; i < 4; i++)
		delete this->materia[i];
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
	if (!m)
		return;
	int i = 0;

	while (i < 4 && this->materia[i])
		i++;
	if (i < 4)
		this->materia[i] = m;
}
AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] && this->materia[i]->getType() == type)
			return this->materia[i]->clone();
	}
	std::cout << "MateriaSource createMateria failed" << std::endl;
	return NULL;
}
