/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:37:34 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/13 18:25:18 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal/Animal.hpp"
#include "Animal/Cat/Cat.hpp"
#include "Animal/Dog/Dog.hpp"
#include "Brain/Brain.hpp"

int main()
{
    Brain brain;
    brain.setIdeas(0, "I am a cat");
    std::cout << brain.getIdeas(0) << std::endl;
    return 0;
}