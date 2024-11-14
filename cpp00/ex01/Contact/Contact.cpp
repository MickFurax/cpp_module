/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:07:43 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/14 09:51:43 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <cstdlib>
#include <iostream>

Contact::Contact() {}

Contact::~Contact() {}

std::string Contact::getFirstName()
{
	return (this->firstName);
}

std::string Contact::getLastName()
{
	return (this->lastName);
}

std::string Contact::getNickname()
{
	return (this->nickname);
}

std::string Contact::getPhoneNumber()
{
	return (this->phoneNumber);
}
std::string Contact::getDarkestSecret()
{
	return (this->darkestSecret);
}

static void	_cinEof(void)
{
	if (std::cin.eof())
	{
		std::cout << std::endl;
		std::exit(0);
		return ;
	}
}
std::string getInput(const std::string label)
{
	std::string str;
	std::cout << label << ": ";
	std::getline(std::cin, str);
	_cinEof();
	if (str.empty())
		str = getInput(label);
	return (str);
}

void Contact::setContactInfo()
{
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
	firstName = getInput("First Name");
	lastName = getInput("Last name");
	nickname = getInput("Nickname");
	phoneNumber = getInput("Phone number");
	darkestSecret = getInput("Darkest secret");
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickname = nickname;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;
}
