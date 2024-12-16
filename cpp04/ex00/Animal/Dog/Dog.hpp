/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:41:48 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/13 17:25:37 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "../Animal.hpp"
#include <iostream>
#include <string>

class Dog : public Animal
{
private:
public:
	Dog();
	Dog(Dog const &src);
	~Dog();

	void makeSound() const;

	Dog &operator=(Dog const &rhs);

};

#endif