/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:48:17 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/15 15:18:51 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::addContact(Contact contact)
{
	this->contacts[this->index] = contact;
	this->index != 7 ? this->index++ : this->index = 0;
}


void	PhoneBook::displayHeader(void)
{
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "Index";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "First name";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "Last name";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "Nickname";
	std::cout << "|";
	std::cout << std::endl;
	std::cout << "+==========+==========+==========+==========+" << std::endl;
}

std::string PhoneBook::truncString(std::string str)
{
	return (str.length() > 10 ? str.substr(0, 9) + "." : str);
}
void	PhoneBook::displayRow(Contact contact, int i)
{
	if (contact.getFirstName().empty())
		return ;
	std::cout << "|";
	std::cout << std::right << std::setw(10) << i + 1;
	std::cout << "|";
	std::cout << std::right << std::setw(10) << truncString(contact.getFirstName());
	std::cout << "|";
	std::cout << std::right << std::setw(10) << truncString(contact.getLastName());
	std::cout << "|";
	std::cout << std::right << std::setw(10) << truncString(contact.getNickname());
	std::cout << "|";
	std::cout << std::endl;
}

void	PhoneBook::displayContact(Contact contact)
{
	if (contact.getFirstName().empty())
		return ;
	std::cout << "First name: " << contact.getFirstName() << std::endl;
	std::cout << "Last name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickname() << std::endl;
	std::cout << "Phone number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contact.getDarkestSecret() << std::endl;
}

void PhoneBook::searchContact()
{
	if (!this->contacts[0].getFirstName().empty())
	{
		this->displayHeader();
		for (int i = 0; i < 8; i++)
			this->displayRow(this->contacts[i], i);
		std::cout << "+----------+----------+----------+----------+";
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
		for (int i = 0; i < 8; i++)
		{
			if (atoi(index_to_search.c_str()) == i + 1
				&& !this->contacts[i].getFirstName().empty())
			{
				this->displayContact(this->contacts[i]);
				return ;
			}
		}
		std::cout << "Invalid index" << std::endl;
		this->searchContact();
	}
}
