/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:41:48 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/10 07:56:47 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "../../Brain/Brain.hpp"
#include "../AAnimal.hpp"
#include <iostream>
#include <string>

class Dog : public AAnimal
{
private:
	Brain *brain;

public:
	Dog();
	Dog(Dog const &src);
	~Dog();

	void makeSound() const;

	Dog &operator=(Dog const &rhs);
};

std::ostream &operator<<(std::ostream &o, Dog const &i);

#endif