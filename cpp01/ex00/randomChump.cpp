/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:52:11 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/18 11:54:55 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie/Zombie.hpp"

void randomChump(std::string name)
{
    Zombie zombie(name);
    zombie.announce();
}