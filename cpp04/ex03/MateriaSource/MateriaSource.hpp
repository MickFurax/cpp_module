/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:58:17 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/12 09:53:59 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <iostream>
#include <string>

class MateriaSource: public IMateriaSource
{
private:
	AMateria *materia[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const &src);
	~MateriaSource();
	MateriaSource &operator=(MateriaSource const &rhs);

	void learnMateria(AMateria *m);
	AMateria *createMateria(std::string const &type);
};

#endif