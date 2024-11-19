/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:18:30 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/19 16:21:34 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

void	ft_sed(std::string &str, std::string s1, std::string s2)
{
    int pos = 0;
    
	while (str.find(s1, pos) != std::string::npos)
	{
		std::cout << str.find(s1, pos) << std::endl;
        pos = str.find(s1, pos) + s1.length();
	}
	(void)s2;
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string filename = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		std::string newString;
		std::string newFilename = filename + ".replace";
		std::ifstream file(filename);
		std::ofstream newFile(newFilename);
		while (getline(file, newString))
		{
			std::cout << newString << std::endl;
			ft_sed(newString, s1, s2);
			newFile << newString << std::endl;
		}
	}
	else
		std::cout << "Invalid arguments" << std::endl;
	return (0);
}