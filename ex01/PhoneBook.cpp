/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:00:06 by maustel           #+#    #+#             */
/*   Updated: 2025/02/07 10:00:06 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : i(0), nbr_contacts(0) {
	for (int index = 0; index < 8; index++) {
		ContactList[index] = Contact();
	}
}

/*-------------------------------------------------------------------------
Print line for Display
Truncate words that are longer than 10 characters and add '.'
-------------------------------------------------------------------------*/
void	PrintLine(std::string str)
{
	if (str.size() > 10)
		str = str.substr(0, 9) + '.';
	std::cout << std::right << std::setfill(' ') << std::setw(10) << str << "|";
}

/*-------------------------------------------------------------------------
Display all contacts as specified in subject
std::right -> right aligned
std::setfill(' ') << std::setw(10) -> each columns 10 characters. if word
sherter than 10, column will be filled with whitespaces
-------------------------------------------------------------------------*/
void	PhoneBook::Display()
{
	int	j = 0;
	std::string name;

	PrintLine("index");
	PrintLine("first name");
	PrintLine("last name");
	PrintLine("nickname");
	std::cout << std::endl;

	while (j < nbr_contacts)
	{
		std::cout << std::right << std::setfill(' ') << std::setw(10) << j << "|";
		PrintLine(ContactList[j].GetValue("FirstName"));
		PrintLine(ContactList[j].GetValue("LastName"));
		PrintLine(ContactList[j].GetValue("NickName"));
		std::cout << std::endl;
		j++;
	}
}

/*-------------------------------------------------------------------------
Create Contact and add it at the end of the contact list
If we already have 8 contacts, safe the contact in the fist place
and override old one
-------------------------------------------------------------------------*/
void	PhoneBook::AddContact()
{
	Contact	newCont;

	newCont.CreateContact();
	if (i == 8)
		i = 0;
	ContactList[i] = newCont;
	i++;
	if (nbr_contacts < 8)
		nbr_contacts++;
}
