/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:17:41 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/28 10:07:48 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap/ClapTrap.hpp"

int main(void)
{
    ClapTrap mo("M-0");

    mo.attack("M-1");
    mo.takeDamage(10);
    mo.beRepaired(5);
    return (0);
}