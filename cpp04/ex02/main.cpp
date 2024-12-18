/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:37:34 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/17 11:25:45 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal/AAnimal.hpp"
#include "Animal/Cat/Cat.hpp"
#include "Animal/Dog/Dog.hpp"
#include "Brain/Brain.hpp"

int main()
{

    const AAnimal *j = new Dog();
    const AAnimal *i = new Cat();
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

    // AAnimal cat;
    return 0;
}