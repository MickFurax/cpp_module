/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:06:35 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/19 09:12:18 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie/Zombie.hpp"

int	main(void)
{
	Zombie *eric = newZombie("Eric");
    randomChump("Deborahzombie");
    eric->announce();
    delete eric;
	return (0);
}
