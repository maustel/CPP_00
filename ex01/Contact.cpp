/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 09:59:52 by maustel           #+#    #+#             */
/*   Updated: 2025/02/07 09:59:52 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : FirstName(""),
		LastName(""),
		NickName(""),
		PhoneNumber(""),
		DarkestSecret("")
{}

Contact::~Contact()
{}

/*-------------------------------------------------------------------------
Get Value of contact-object
-------------------------------------------------------------------------*/
std::string Contact::GetValue(std::string attr) const
{
	if (attr == "FirstName")
		return (this->FirstName);
	if (attr == "LastName")
		return (this->LastName);
	if (attr == "NickName")
		return (this->NickName);
	if (attr == "PhoneNumber")
		return (this->PhoneNumber);
	if (attr == "DarkestSecret")
		return (this->DarkestSecret);
	else
		return (NULL);
}

/*-------------------------------------------------------------------------
Ask user to insert values that will be written to object-values
-------------------------------------------------------------------------*/
std::string	Contact::SetValue(const std::string prompt)
{
	std::string	value;

	std::cout << "Enter " << prompt;
	getline(std::cin, value);
	if (std::cin.fail()) {
		std::cerr << "\e[0;31m" << "Error: std::cin" << std::endl;
		exit (1);
	}
	while (value.empty())
	{
		std::cout << "\e[0;31m" << "Empty fields are not allowed! Retry:" << "\e[0;37m" << std::endl;
		getline(std::cin, value);
		if (std::cin.fail()) {
		std::cerr << "\e[0;31m" << "Error: std::cin" << std::endl;
		exit (1);
		}
	}
	return (value);
}

/*-------------------------------------------------------------------------
Write values to attributes of new contact-object
-------------------------------------------------------------------------*/
void	Contact::CreateContact()
{
	std::cout << "\e[0;34m" << "Saving a new contact." << "\e[0;37m" << std::endl;

	this->FirstName = SetValue("first name: ");
	this->LastName = SetValue("last name: ");
	this->NickName = SetValue("nickname: ");
	this->PhoneNumber = SetValue("phone number: ");
	this->DarkestSecret = SetValue("darkest secret: ");
	std::cout << "\e[0;32m" << "Created new contact: " << this->FirstName << "\e[0;37m" << std::endl;
}
