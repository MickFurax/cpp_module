/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:06:34 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/13 13:19:26 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
  private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

  public:
	Contact();
	~Contact();
	std::string getFirstName();
	std::string getLastName();
	std::string getNickname();
	std::string getPhoneNumber();
	std::string getDarkestSecret();
	void setContactInfo();
};

#endif
