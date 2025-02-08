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
		PhoneNumber(0),
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

void	Contact::create_contact()
{
	std::cout << "Safing a new contact:" << std::endl;
	std::cout << "Enter first name: ";
	std::getline(std::cin, FirstName);

	std::cout << "Enter last name: ";
	std::getline(std::cin, LastName);

	std::cout << "Enter nickname: ";
	std::getline(std::cin, NickName);

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, DarkestSecret);

	std::cout << "Enter phone number: ";
	while (!(std::cin >> PhoneNumber)) {
		std::cerr << "Error reading number!\n";
		exit (1);
	}

	std::cout << std::endl;
}
