/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 08:13:26 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/10 16:09:57 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character/Character.hpp"
#include "Materia/AMateria.hpp"
#include "Materia/Ice/Ice.hpp"
#include "Materia/Cure/Cure.hpp"

int main(void)
{
    Character* mccalister = new Character("MCCalister");
    (void)mccalister;
    Ice ice;
    Cure cure;
    ice.use(*mccalister);
    cure.use(*mccalister);
    delete mccalister;
    return 0;
}