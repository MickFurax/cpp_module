/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:39:08 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/10 08:08:00 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include "../Brain/Brain.hpp"
#include <iostream>
#include <string>

class AAnimal
{
private:
protected:
	std::string type;

public:
	AAnimal();
	AAnimal(std::string type);
	AAnimal(AAnimal const &src);
	virtual ~AAnimal();

	virtual void makeSound() const = 0;

	std::string getType() const;

	AAnimal &operator=(AAnimal const &rhs);
};

std::ostream &operator<<(std::ostream &o, AAnimal const &i);

#endif