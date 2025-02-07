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

void	create_contact(Contact& contact)
{
	std::cout << "C" << std::endl;
	// contact = Contact("", "", "", 0, "");
	contact.FirstName = "";
	std::cout << "B" << std::endl;
	contact.LastName = "";
	contact.NickName = "";
	contact.DarkestSecret = "";
	contact.PhoneNumber = 0;

    std::cout << "Safe a new contact." << std::endl;
    std::cout << "Enter first name: ";
    std::getline(std::cin, contact.FirstName);

    std::cout << "Enter last name: ";
    std::getline(std::cin, contact.LastName);

    std::cout << "Enter nickname: ";
    std::getline(std::cin, contact.NickName);

    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, contact.DarkestSecret);

	// std::cout << "Enter phone number: ";
    // std::cin >> contact.PhoneNumber;
    // std::cin.ignore();  // Ignore newline left in input buffer
    // std::cout << "Enter phone number: ";
	// if (!(std::cin >> contact.PhoneNumber)) {
    //     std::cerr << "Error reading number!\n";
    //     exit (1);
    // }

	std::cout << std::endl;
	// contact.GetInfo();
}
