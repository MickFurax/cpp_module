/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 08:14:07 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/10 17:26:03 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "../Character/ICharacter.hpp"
#include <iostream>
#include <string>

class AMateria
{
private:
protected:
	std::string type;

public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(AMateria const &src);
	~AMateria();

	std::string const &getType() const;

	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);

	AMateria &operator=(AMateria const &rhs);
};

std::ostream &operator<<(std::ostream &o, AMateria const &i);

#endif