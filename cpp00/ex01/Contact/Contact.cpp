/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:07:43 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/15 14:49:00 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

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

std::string Contact::getInput(const std::string label)
{
	std::string str;
	std::cout << label << ": ";
	std::getline(std::cin, str);
	if (std::cin.eof())
	{
		std::cout << std::endl;
		exit(0);
	}
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
	firstName = this->getInput("First Name");
	lastName = this->getInput("Last name");
	nickname = this->getInput("Nickname");
	phoneNumber = this->getInput("Phone number");
	darkestSecret = this->getInput("Darkest secret");
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickname = nickname;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;
}
