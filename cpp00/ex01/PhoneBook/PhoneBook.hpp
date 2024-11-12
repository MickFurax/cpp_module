/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:46:59 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/12 15:55:48 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../Contact/Contact.hpp"

class PhoneBook
{
private:
    Contact contact[8];
public:
    PhoneBook();
    ~PhoneBook();
    int index = 0;
    void addContact();
};
