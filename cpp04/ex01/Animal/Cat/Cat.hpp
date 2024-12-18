/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:40:58 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/16 18:07:57 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "../Animal.hpp"
#include "../../Brain/Brain.hpp"
#include <iostream>
#include <string>

class Cat : public Animal
{
private:
	Brain *brain;

public:
	Cat();
	Cat(Cat const &src);
	~Cat();

	void makeSound() const;

	Cat &operator=(Cat const &rhs);

	void setBrain(Brain *brain);
	Brain *getBrain() const;
};

#endif
