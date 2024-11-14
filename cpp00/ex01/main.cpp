/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:05:29 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/14 09:59:25 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact/Contact.hpp"
#include "PhoneBook/PhoneBook.hpp"
#include <climits>
#include <iostream>
#include <limits>

int	main(void)
{
	PhoneBook	phoneBook;
	Contact		contact;

	std::string command;
	while (true)
	{
		std::cout << "> ";
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			contact.setContactInfo();
			phoneBook.addContact(contact);
		}
		else if (command == "SEARCH")
			phoneBook.searchContact();
		else if (command == "EXIT" || std::cin.eof())
		{
			std::cout << std::endl;
			break ;
		}
	}
	return (0);
}
