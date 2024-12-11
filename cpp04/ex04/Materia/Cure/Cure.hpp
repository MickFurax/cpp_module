/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 09:09:56 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/10 11:31:21 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "../AMateria.hpp"
#include <iostream>
#include <string>

class Cure: public AMateria
{
private:

public:
	Cure();
	Cure(Cure const &src);
	~Cure();

	Cure &operator=(Cure const &rhs);

	AMateria *clone() const;
	void use(ICharacter &target);
};

std::ostream &operator<<(std::ostream &o, Cure const &i);

#endif
