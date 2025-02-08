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

void Contact::GetInfo()
{
	std::cout << "First Name: " << FirstName << std::endl;
	std::cout << "Last Name: " << LastName << std::endl;
	std::cout << "Nickname: " << NickName << std::endl;
	std::cout << "Phone Number: " << PhoneNumber << std::endl;
	std::cout << "Darkest Secret: " << DarkestSecret << std::endl;
}

std::string	Contact::set_value(const std::string prompt)
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

void	Contact::create_contact()
{
	std::cout << "Saving a new contact." << std::endl;

	FirstName = set_value("first name: ");
	LastName = set_value("last name: ");
	NickName = set_value("nickname: ");
	PhoneNumber = set_value("phone number: ");
	DarkestSecret = set_value("darkest secret: ");
}
