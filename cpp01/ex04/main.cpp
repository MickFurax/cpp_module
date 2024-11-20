/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:18:30 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/20 15:06:52 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

void	ft_sed(std::string &str, std::string s1, std::string s2)
{
	int	pos;

	pos = 0;
	std::string newString;
	while (str.find(s1, pos) != std::string::npos)
	{
		newString += str.substr(pos, str.find(s1, pos) - pos) + s2;
		pos = str.find(s1, pos) + s1.length();
	}
	newString += str.substr(pos);
	str = newString;
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string newString;
		std::string newFilename = argv[1];
		newFilename += ".replace";
		std::ifstream file(argv[1]);
		std::ofstream newFile(newFilename.c_str());
		while (getline(file, newString))
		{
			ft_sed(newString, argv[2], argv[3]);
			newFile << newString << std::endl;
		}
	}
	else
		std::cout << "Invalid arguments" << std::endl;
	return (0);
}