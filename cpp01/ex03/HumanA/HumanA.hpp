/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:25:09 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/19 14:51:49 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
# define HUMAN_A_H

#include "../Weapon/Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon &weapon;
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void attack();
};

#endif