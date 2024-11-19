/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:11:50 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/19 09:52:21 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie/Zombie.hpp"


Zombie* zombieHorde( int N, std::string name )
{
    if (N < 1)
        return (NULL);
    Zombie *zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
        zombies[i].setName(name);
    return (zombies);
}
