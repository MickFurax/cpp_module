/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:05:29 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/15 14:56:54 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact/Contact.hpp"
#include "PhoneBook/PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phoneBook;

	std::string command;
	while (true)
	{
		std::cout << "> ";
		std::getline(std::cin, command);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			break;
		}
		if (command == "ADD")
		{
			Contact contact;
			contact.setContactInfo();
			phoneBook.addContact(contact);
		}
		else if (command == "SEARCH")
			phoneBook.searchContact();
		else if (command == "EXIT")
			break ;
	}
	return (0);
}
