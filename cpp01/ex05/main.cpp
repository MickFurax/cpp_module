/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 09:10:21 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/20 12:11:18 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl/Harl.hpp"
#include <iostream>

int main(void)
{
    Harl harl;
    harl.complain("lol");
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    return (0);
}