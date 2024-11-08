/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:29:47 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/08 15:03:33 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "★ LOUD AND UNBEARABLE FEEDBACK NOISE ★";
	else
	{
        argv++;
		for (size_t i = 0; argv[i]; i++)
		{
			for (size_t j = 0; argv[i][j]; j++)
				std::cout << (char)toupper(argv[i][j]);
		}
	}
	std::cout << "\n";
	return (0);
}
