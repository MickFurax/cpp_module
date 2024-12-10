/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:37:34 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/10 08:09:06 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal/AAnimal.hpp"
#include "Animal/Cat/Cat.hpp"
#include "Animal/Dog/Dog.hpp"
#include "Animal/WrongAnimal.hpp"
#include "Animal/WrongCat/WrongCat.hpp"
#include "Brain/Brain.hpp"

int main()
{
    Dog dog;
    dog.makeSound();
    Cat cat;
    cat.makeSound();
    // AAnimal AAnimal;
    return 0;
}