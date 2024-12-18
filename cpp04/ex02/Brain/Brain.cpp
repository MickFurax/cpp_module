/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:18:43 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/13 18:20:40 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
	for (int i = 0; i < 100; i++)
		this->setIdeas(i, src.getIdeas(i));
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &rhs)
{
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->setIdeas(i, rhs.getIdeas(i));
	}
	return *this;
}

std::string Brain::getIdeas(int i) const
{
	if (i >= 0 && i < 100)
		return this->ideas[i];
	return "";
}

void Brain::setIdeas(int i, std::string idea)
{
	if (i >= 0 && i < 100)
		this->ideas[i] = idea;
}
