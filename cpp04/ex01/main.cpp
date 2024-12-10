/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:37:34 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/10 07:37:46 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal/Animal.hpp"
#include "Animal/Cat/Cat.hpp"
#include "Animal/Dog/Dog.hpp"
#include "Animal/WrongAnimal.hpp"
#include "Animal/WrongCat/WrongCat.hpp"
#include "Brain/Brain.hpp"

int main()
{
    int n = 10;
    Animal *animals[n];

    for (int i = 0; i < n / 2; i++)
        animals[i] = new Dog();
    for (int i = n / 2; i < n; i++)
        animals[i] = new Cat();
    for (int i = 0; i < n; i++)
        animals[i]->makeSound();
    for (int i = 0; i < n; i++)
        delete animals[i];

    const Animal *j = new Dog();
    const Animal *i = new Cat();
    j->makeSound();
    i->makeSound();
    delete j; // should not create a leak
    delete i;
    return 0;
}