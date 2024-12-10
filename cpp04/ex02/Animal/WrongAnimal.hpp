/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:29:55 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/09 17:34:12 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_AAnimal_HPP
#define WRONG_AAnimal_HPP

#include <iostream>
#include <string>

class WrongAAnimal
{
private:
protected:
	std::string type;

public:
	WrongAAnimal();
	WrongAAnimal(std::string type);
	WrongAAnimal(WrongAAnimal const &src);
	virtual ~WrongAAnimal();

	void makeSound() const;

	std::string getType() const;

	WrongAAnimal &operator=(WrongAAnimal const &rhs);
};

std::ostream &operator<<(std::ostream &o, WrongAAnimal const &i);

#endif