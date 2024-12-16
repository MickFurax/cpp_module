/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:40:58 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/13 17:25:42 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "../Animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal
{
private:
public:
	Cat();
	Cat(Cat const &src);
	~Cat();

	void makeSound() const;

	Cat &operator=(Cat const &rhs);
};

#endif