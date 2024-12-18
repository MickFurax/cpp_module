/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:41:42 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/17 11:03:54 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->brain = new Brain(*src.brain);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

Dog &Dog::operator=(Dog const &rhs)
{
	std::cout << "Dog assignment operator called" << std::endl;
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

void Dog::makeSound() const
{
	std::cout << "Wooof" << std::endl;
}

void Dog::setBrain(Brain *brain)
{
	if (brain)
	{
		delete this->brain;
		this->brain = new Brain(*brain);
	}
}

Brain *Dog::getBrain() const
{
	return brain;
}
