/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:11:13 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/19 10:23:44 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie/Zombie.hpp"

int	main(void)
{
	int N = 5;
	Zombie *zombies = zombieHorde(N, "Twice");
	for (int i = 0; i < N; i++)
		zombies[i].announce();
	delete []zombies;
	return (0);
}
