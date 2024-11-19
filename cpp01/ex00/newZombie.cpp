/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:41:49 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/18 14:11:06 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie/Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*zombie;

	zombie = new Zombie(name);
	return (zombie);
}
