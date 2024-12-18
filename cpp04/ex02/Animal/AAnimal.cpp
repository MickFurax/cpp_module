/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:39:11 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/18 15:15:17 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Animal constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : type(type)
{
	std::cout << "Animal constructor called with type " << type << std::endl;
}

AAnimal::AAnimal(const AAnimal &src) : type(src.type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal destructor called" << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return *this;
}

std::string AAnimal::getType() const
{
	return this->type;
}

