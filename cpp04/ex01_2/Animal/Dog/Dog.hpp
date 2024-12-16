/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:41:48 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/14 10:17:59 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "../Animal.hpp"
#include "../../Brain/Brain.hpp"
#include <iostream>
#include <string>

class Dog : public Animal
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

#endif