/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:06:34 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/12 15:29:19 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact
{
  private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	int phoneNumber;
	std::string darkestSecret;

  public:
	Contact(std::string firstName, std::string lastName, std::string nickname,
		int phoneNumber, std::string darkestSecret);
	~Contact();
	std::string getFirstName();
	std::string getLastName();
	std::string getNickname();
	int getPhoneNumber();
	std::string getDarkestSecret();
};
