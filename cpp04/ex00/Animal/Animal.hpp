/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:39:08 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/18 15:14:26 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
private:
protected:
	std::string type;

public:
	Animal();
	Animal(std::string type);
	Animal(Animal const &src);
	virtual ~Animal();

	virtual void makeSound() const;

	std::string getType() const;

	Animal &operator=(Animal const &rhs);
};

#endif