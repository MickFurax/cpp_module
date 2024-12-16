/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:22:28 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/12 09:50:53 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "../AMateria.hpp"
#include <iostream>
#include <string>

class Cure : public AMateria
{
public:
	Cure();
	Cure(Cure const &src);
	~Cure();
	Cure &operator=(Cure const &rhs);

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif
