/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:48:17 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/13 14:09:15 by arabeman         ###   ########.fr       */
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

void PhoneBook::searchContact()
{

	if (index > 0)
	{
		std::cout << std::right << std::setw(10) << "Index";
		std::cout << "|";
		std::cout << std::right << std::setw(10) << "First name";
		std::cout << "|";
		std::cout << std::right << std::setw(10) << "Last name";
		std::cout << "|";
		std::cout << std::right << std::setw(10) << "Nickname";
		std::cout << std::endl;
		for (int i = 0; i < this->index; i++)
		{
            std::cout << std::right << std::setw(10) << i + 1;
            std::cout << "|";
            std::cout << std::right << std::setw(10) << _cutString(this->contact[i].getFirstName());
            std::cout << "|";
            std::cout << std::right << std::setw(10) << _cutString(this->contact[i].getLastName());
            std::cout << "|";
            std::cout << std::right << std::setw(10) << _cutString(this->contact[i].getNickname());
            std::cout << std::endl;
		}
		std::cout << std::endl;
        std::cout << "Select index: ";
        std::string index_to_search;
        std::getline(std::cin, index_to_search);
        for (int i = 0; i < this->index; i++)
        {
            if (atoi(index_to_search.c_str()) == i + 1)
            {
                std::cout << "First name: " << this->contact[i].getFirstName() << std::endl;
                std::cout << "Last name: " << this->contact[i].getLastName() << std::endl;
                std::cout << "Nickname: " << this->contact[i].getNickname() << std::endl;
                std::cout << "Phone number: " << this->contact[i].getPhoneNumber() << std::endl;
                std::cout << "Darkest secret: " << this->contact[i].getDarkestSecret() << std::endl;
                return ;
            }
        }
        std::cout << "Invalid index" << std::endl;
	}
}
