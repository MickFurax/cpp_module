/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:40:58 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/10 07:56:47 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "../../Brain/Brain.hpp"
#include "../AAnimal.hpp"
#include <iostream>
#include <string>

class Cat : public AAnimal
{
private:
	Brain *brain;

public:
	Cat();
	Cat(Cat const &src);
	~Cat();

	void makeSound() const;

	Cat &operator=(Cat const &rhs);
};

std::ostream &operator<<(std::ostream &o, Cat const &i);

#endif