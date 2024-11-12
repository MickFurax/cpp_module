/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:07:43 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/12 15:47:34 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(std::string firstName, std::string lastName,
	std::string nickname, int phoneNumber,
	std::string darkestSecret) : firstName(firstName), lastName(lastName),
	nickname(nickname), phoneNumber(phoneNumber), darkestSecret(darkestSecret)
{
	std::cout << "Contact created" << std::endl;
}

Contact::~Contact()
{
}

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

int Contact::getPhoneNumber()
{
	return (this->phoneNumber);
}
std::string Contact::getDarkestSecret()
{
	return (this->darkestSecret);
}