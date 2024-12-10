/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:32:10 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/10 08:08:43 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "../WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongCat : public WrongAAnimal
{
private:
public:
	WrongCat();
	WrongCat(WrongCat const &src);
	~WrongCat();

	void makeSound() const;

	WrongCat &operator=(WrongCat const &rhs);
};

std::ostream &operator<<(std::ostream &o, WrongCat const &i);

#endif