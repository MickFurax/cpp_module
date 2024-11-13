/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:46:59 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/13 12:57:07 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "../Contact/Contact.hpp"
# include <iostream>

class PhoneBook
{
  private:
	Contact contact[8];
	int index;

  public:
	PhoneBook();
	~PhoneBook();
	void addContact(Contact contact);
  void searchContact();
};

#endif
