/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:05:29 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/13 13:17:28 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact/Contact.hpp"
#include "PhoneBook/PhoneBook.hpp"
#include <iostream>

int	main(void)
{
	std::string command;
	PhoneBook phoneBook;
	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			Contact contact;
			contact.setContactInfo();
			phoneBook.addContact(contact);
		}
		else if (command == "SEARCH")
		{
			phoneBook.searchContact();
		}
		else if (command == "EXIT")
		{
			break ;
		}
	}

	return (0);
}