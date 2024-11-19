/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:25:37 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/19 15:08:54 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
# define HUMAN_B_H

#include "../Weapon/Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon *weapon;
public:
    HumanB(std::string name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon weapon);
};




#endif