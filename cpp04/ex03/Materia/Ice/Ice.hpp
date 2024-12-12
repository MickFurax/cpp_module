/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:22:28 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/12 09:50:51 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "../AMateria.hpp"
#include <iostream>
#include <string>

class Ice : public AMateria
{
public:
	Ice();
	Ice(Ice const &src);
	~Ice();
	Ice &operator=(Ice const &rhs);

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif