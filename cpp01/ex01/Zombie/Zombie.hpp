/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:11:31 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/19 10:23:58 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
  private:
	std::string name;

  public:
	Zombie();
	~Zombie();
	void setName(std::string name);
	void announce(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
