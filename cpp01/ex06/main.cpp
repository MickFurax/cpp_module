/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:36:51 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/20 15:08:55 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl/Harl.hpp"
#include <iostream>

void	harlFilter(std::string string)
{
	Harl	harl;

	std::string all_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; true; i++)
	{
		if (string == all_level[i] || i >= 4)
		{
			switch (i)
			{
			case 0:
				harl.complain("DEBUG");
			case 1:
                harl.complain("INFO");
			case 2:
                harl.complain("WARNING");
			case 3:
				harl.complain("ERROR");
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				break ;
			}
			return ;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		harlFilter(std::string(argv[1]));
	return (0);
}