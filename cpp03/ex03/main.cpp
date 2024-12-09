/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:16:57 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/09 11:30:09 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap/ClapTrap.hpp"
#include "ScavTrap/ScavTrap.hpp"
#include "FragTrap/FragTrap.hpp"
#include "DiamondTrap/DiamondTrap.hpp"

int main(void)
{
    DiamondTrap bob("Bob");
    bob.whoAmI();
    bob.attack("Alice");
    return (0);
}