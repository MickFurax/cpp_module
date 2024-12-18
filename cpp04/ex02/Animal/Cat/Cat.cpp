/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:40:47 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/17 10:54:54 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
	brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : AAnimal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain(*src.brain);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

Cat &Cat::operator=(Cat const &rhs)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.getType();
		if (brain)
		{
			delete this->brain;
			this->brain = new Brain(*rhs.brain);
		}
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

void Cat::setBrain(Brain *brain)
{
	if (brain)
	{
		delete this->brain;
		this->brain = new Brain(*brain);
	}
}

Brain *Cat::getBrain() const
{
	return brain;
}


