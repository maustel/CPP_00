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

PhoneBook::PhoneBook() : i(0) {
	for (int index = 0; index < 8; index++) {
		ContactList[index] = Contact();
	}
}

void	PhoneBook::AddContact()
{
	Contact	newCont;

	newCont.create_contact();
	ContactList[i] = newCont;
	std::cout << "\nFirst Contact:\n" << std::endl;
	ContactList[0].GetInfo();
	std::cout << "\nSecond Contact:\n" << std::endl;
	ContactList[1].GetInfo();
	i++;

}
