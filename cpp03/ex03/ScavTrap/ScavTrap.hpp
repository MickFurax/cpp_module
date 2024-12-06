/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:16:51 by arabeman          #+#    #+#             */
/*   Updated: 2024/12/06 11:43:44 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "../ClapTrap/ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
private:
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &src);
	~ScavTrap();

	ScavTrap &operator=(ScavTrap const &rhs);

	// action
	void attack(const std::string &target);
	void guardGate(void);
};

std::ostream &operator<<(std::ostream &o, ScavTrap const &i);

#endif