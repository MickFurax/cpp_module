/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:12:54 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/28 10:52:41 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap/ClapTrap.hpp"
#include "ScavTrap/ScavTrap.hpp"

int main(void)
{
    ClapTrap mo("M-0");
    ScavTrap mo2("M-1");
    mo2.attack("M-0");
    mo.takeDamage(20);
    mo.attack("M-1");
    mo2.takeDamage(3);
    mo2.beRepaired(5);
    mo2.guardGate();
    return (0);
}