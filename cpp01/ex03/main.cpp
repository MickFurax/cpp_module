/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:20:44 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/19 15:16:28 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon/Weapon.hpp"
#include "HumanA/HumanA.hpp"
#include "HumanB/HumanB.hpp"

int main(void)
{
    {
        Weapon club = Weapon("crude spiked");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked");
        HumanB jim("Jim");
        jim.attack();
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return (0);
}
