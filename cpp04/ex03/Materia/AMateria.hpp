/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 09:54:38 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/16 18:47:14 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "../Character/ICharacter.hpp"
#include <iostream>
#include <string>

class AMateria
{
protected:
	std::string type;

public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(AMateria const &src);
	virtual ~AMateria();
	AMateria &operator=(AMateria const &rhs);

	std::string const &getType() const;
	void setType(std::string const &type);
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif