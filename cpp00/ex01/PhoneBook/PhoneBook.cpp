/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:48:17 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/14 09:51:47 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <iostream>
#include <stdlib.h>

PhoneBook::PhoneBook()
{
	this->index = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::addContact(Contact contact)
{
	this->contact[this->index] = contact;
	if (this->index < 7)
		index++;
}

static std::string _cutString(std::string str)
{
	return (str.length() > 10 ? str.substr(0, 9) + "." : str);
}

static void	_displayHeader(void)
{
	std::cout << std::endl;
	std::cout << std::right << std::setw(10) << "Index";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "First name";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "Last name";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "Nickname";
	std::cout << std::endl;
}

static void	_displayRow(Contact contact, int i)
{
	std::cout << std::right << std::setw(10) << i + 1;
	std::cout << "|";
	std::cout << std::right << std::setw(10) << _cutString(contact.getFirstName());
	std::cout << "|";
	std::cout << std::right << std::setw(10) << _cutString(contact.getLastName());
	std::cout << "|";
	std::cout << std::right << std::setw(10) << _cutString(contact.getNickname());
	std::cout << std::endl;
}

static void	_displayContact(Contact contact)
{
	std::cout << "First name: " << contact.getFirstName() << std::endl;
	std::cout << "Last name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickname() << std::endl;
	std::cout << "Phone number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contact.getDarkestSecret() << std::endl;
}



void PhoneBook::searchContact()
{
	if (index > 0)
	{
		_displayHeader();
		for (int i = 0; i < this->index; i++)
			_displayRow(this->contact[i], i);
		std::cout << std::endl;
		std::cout << "Select index: ";
		std::string index_to_search;
		std::cin.clear();
		std::getline(std::cin, index_to_search);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(0);
			return ;
		}
		for (int i = 0; i < this->index; i++)
		{
			if (atoi(index_to_search.c_str()) == i + 1)
			{
                _displayContact(this->contact[i]);
				return ;
			}
		}
		std::cout << "Invalid index" << std::endl;
        this->searchContact();
	}
}
