/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:46:59 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/15 14:52:25 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "../Contact/Contact.hpp"
# include <iomanip>

class PhoneBook
{
  private:
	Contact contacts[8];
	int index;

	std::string truncString(std::string str);
	void displayHeader(void);
	void displayRow(Contact contact, int i);
	void displayContact(Contact contact);

  public:
	PhoneBook();
	~PhoneBook();
	void addContact(Contact contact);
	void searchContact();
};

#endif
