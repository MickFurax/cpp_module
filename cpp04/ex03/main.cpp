/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 09:46:15 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/16 19:17:00 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "MateriaSource/IMateriaSource.hpp"
#include "MateriaSource/MateriaSource.hpp"
#include "Materia/Ice/Ice.hpp"
#include "Materia/Cure/Cure.hpp"
#include "Character/ICharacter.hpp"
#include "Character/Character.hpp"

int main(void)
{
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter *me = new Character("me");
    AMateria *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter *bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;

    std::cout << std::endl;
    std::cout << "My test:" << std::endl;
    std::cout << std::endl;

    MateriaSource ms;
    ms.learnMateria(new Ice());
    MateriaSource ms2 = ms;
    return 0;
}
