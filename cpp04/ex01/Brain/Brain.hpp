/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:18:31 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/13 18:22:08 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
private:
	std::string ideas[100];

public:
	Brain();
	Brain(Brain const &src);
	~Brain();

	Brain &operator=(Brain const &rhs);

	// getter and setter
	std::string getIdeas(int index) const;
	void setIdeas(int index, std::string idea);
};

#endif