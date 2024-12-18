/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:37:34 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/18 15:13:46 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal/Animal.hpp"
#include "Animal/Cat/Cat.hpp"
#include "Animal/Dog/Dog.hpp"
#include "Brain/Brain.hpp"

int main()
{
    int n = 10;
    Animal *animals[n];
    for (int i = 0; i < n; i++)
    {
        if (i < n / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < n; i++)
        animals[i]->makeSound();

    for (int i = 0; i < n; i++)
        delete animals[i];

    std::cout << std::endl;
        
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    delete j; // should not create a leak
    delete i;

    std::cout << std::endl;
    std::cout << "Deep copy test:" << std::endl;
    std::cout << std::endl;

    Brain brain;
    brain.setIdeas(0, "I am a dog");

    Dog *dog = new Dog();
    dog->setBrain(&brain);

    Dog *dog2 = new Dog(*dog);

    std::cout << "dog's brain address: " << dog->getBrain() << std::endl;
    std::cout << "dog2's brain address: " << dog2->getBrain() << std::endl;

    std::cout << "dog's first idea: " << dog->getBrain()->getIdeas(0) << std::endl;
    dog->getBrain()->setIdeas(0, "new idea");
    std::cout << "dog2's first idea: " << dog2->getBrain()->getIdeas(0) << std::endl;

    dog->makeSound();
    dog2->makeSound();

    delete dog;
    delete dog2;
    return 0;
}