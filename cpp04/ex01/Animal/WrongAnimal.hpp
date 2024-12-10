/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:29:55 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/09 17:34:12 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
private:
protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal const &src);
	virtual ~WrongAnimal();

	void makeSound() const;

	std::string getType() const;

	WrongAnimal &operator=(WrongAnimal const &rhs);
};

std::ostream &operator<<(std::ostream &o, WrongAnimal const &i);

#endif