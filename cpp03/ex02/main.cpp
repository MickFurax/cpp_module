/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:57:00 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/28 11:12:21 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap/ClapTrap.hpp"
#include "ScavTrap/ScavTrap.hpp"
#include "FragTrap/FragTrap.hpp"

int main(void)
{
    FragTrap mo("M-0");
    ScavTrap mo2("M-1");
    mo2.guardGate();
    mo.highFivesGuys();
    mo.attack("M-1");
    mo2.takeDamage(30);
    mo2.attack("M-0");
    mo.takeDamage(50);
    mo.beRepaired(5);
    return (0);
}