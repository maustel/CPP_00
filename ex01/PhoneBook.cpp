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

/*-------------------------------------------------------------------------
Constructor
for each contact of contactlist call Constructor of class Contact
-------------------------------------------------------------------------*/
PhoneBook::PhoneBook() : i(0), nbr_contacts(0) {
	for (int index = 0; index < 8; index++) {
		ContactList[index] = Contact();
	}
}

PhoneBook::~PhoneBook()
{}

/*-------------------------------------------------------------------------
Ask user to choose index of contact
if wrong input, return.
display the contact information, one field per line
-------------------------------------------------------------------------*/
void	PhoneBook::DisplayIndexContact()
{
	int	index;
	std::string input;

	if (this->nbr_contacts == 0)
	{
		std::cout << "\e[0;31m" << "No index to choose!" << "\e[0;37m" << std::endl;
		return ;
	}
	std::cout << "\e[0;34m" << "Choose index of contact you want to see: " << "\e[0;37m";

	getline(std::cin, input);
	if (std::cin.fail()) {
		std::cerr << "\e[0;31m" << "Error: std::cin" << std::endl;
		exit (1) ;
	}
	if (input == "0")
		index = 0;
	else
	{
		index = atoi(input.c_str());
		if (index <= 0 || index >= this->nbr_contacts)
		{
			std::cout << "\e[0;31m" << "Index is out of range or wrong! Return." << "\e[0;37m" << std::endl;
			return ;
		}
	}
	if (index >= 0 && index <= this->nbr_contacts)
	{
		std::cout << this->ContactList[index].GetValue("FirstName") << std::endl;
		std::cout << this->ContactList[index].GetValue("LastName") << std::endl;
		std::cout << this->ContactList[index].GetValue("NickName") << std::endl;
		std::cout << this->ContactList[index].GetValue("PhoneNumber") << std::endl;
		std::cout << this->ContactList[index].GetValue("DarkestSecret") << std::endl;
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
void	PhoneBook::DisplayContactList()
{
	int	j = 0;
	std::string name;

	PrintLine("index");
	PrintLine("first name");
	PrintLine("last name");
	PrintLine("nickname");
	std::cout << std::endl;

	while (j < this->nbr_contacts)
	{
		std::cout << std::right << std::setfill(' ') << std::setw(10) << j << "|";
		PrintLine(this->ContactList[j].GetValue("FirstName"));
		PrintLine(this->ContactList[j].GetValue("LastName"));
		PrintLine(this->ContactList[j].GetValue("NickName"));
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
	if (this->i == 8)
		this->i = 0;
	this->ContactList[i] = newCont;
	i++;
	if (this->nbr_contacts < 8)
		this->nbr_contacts++;
}
