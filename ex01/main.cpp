/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:12:13 by maustel           #+#    #+#             */
/*   Updated: 2025/02/06 12:12:13 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	std::string	input;
	PhoneBook	phonebook;

	while(true)
	{
		std::cout << "Enter command:" << std::endl;
		getline(std::cin, input);
		if (std::cin.fail()) {
			std::cerr << "\e[0;31m" << "Error: std::cin" << std::endl;
			return (1);
		}
		if (input == "EXIT")
		{
			std::cout << "\e[0;32m" << "exiting" << "\e[0;37m" << std::endl;
			return (0);
		}
		else if (input == "ADD")
			phonebook.AddContact();
		else if (input == "SEARCH")
		{
			phonebook.DisplayContactList();
			phonebook.DisplayIndexContact();
		}
		else
			std::cout << "\e[0;31m" << input << " is not a valid command!" << "\e[0;37m" << std::endl;
	}

	return (0);
}
