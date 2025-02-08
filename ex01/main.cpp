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

#include <iostream> //

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	std::string	input;
	PhoneBook	Book;

	while(true)
	{
		std::cout << "Enter command:" << std::endl;
		std::getline(std::cin, input);

		if (input == "EXIT")	//free something?
			exit (0);
		else if (input == "ADD")
			Book.AddContact();
		// else if (input == "ADD")
		// {
		// 	one.create_contact();
			// if (i < 8)
			// {
			// 	std::advance(it, i);
			// 	create_contact(*it);
			// 	i++;
			// }
		// }
		// else if (input == "SEARCH")
		// 	search_contact();
		// else
		// 	std::cout << "Not a valid command!" << std::endl;
	}

	return (0);
}
