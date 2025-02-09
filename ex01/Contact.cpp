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

/*-------------------------------------------------------------------------
Get Value of contact-object
-------------------------------------------------------------------------*/
std::string Contact::GetValue(std::string attr)
{
	if (attr == "FirstName")
		return (FirstName);
	if (attr == "LastName")
		return (LastName);
	if (attr == "NickName")
		return (NickName);
	if (attr == "PhoneNumber")
		return (PhoneNumber);
	if (attr == "DarkestSecret")
		return (DarkestSecret);
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
	std::getline(std::cin, value);
	if (std::cin.fail()) {
		std::cerr << "Error: std::cin" << std::endl;
		exit(1);
	}
	while (value.empty())
	{
		std::cout << "Empty fields are not allowed! Retry:" << std::endl;
		std::getline(std::cin, value);
	}
	return (value);
}

/*-------------------------------------------------------------------------
Write values to attributes of new contact-object
-------------------------------------------------------------------------*/
void	Contact::CreateContact()
{
	std::cout << "Saving a new contact." << std::endl;

	FirstName = SetValue("first name: ");
	LastName = SetValue("last name: ");
	NickName = SetValue("nickname: ");
	PhoneNumber = SetValue("phone number: ");
	DarkestSecret = SetValue("darkest secret: ");
}
