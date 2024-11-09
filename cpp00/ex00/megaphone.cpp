/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:29:47 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/09 19:21:44 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	std::string str;
	if (argc == 1)
		std::cout << "★ LOUD AND UNBEARABLE FEEDBACK NOISE ★";
	else
	{
		for (size_t i = 1; argv[i]; i++)
			str += argv[i];
		for (size_t i = 0; str[i]; i++)
			std::cout << (char)toupper(str[i]);
	}
	std::cout << std::endl;
	return (0);
}
