/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 09:25:34 by maustel           #+#    #+#             */
/*   Updated: 2025/02/07 09:25:34 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_HPP__
# define __PHONEBOOK_HPP__

#include <iostream>
#include <iomanip>
#include <array>
// #include <list>

#include "Contact.hpp"

class PhoneBook
{
	private:
	std::array<Contact, 8> ContactList;
	// Contact	ContactList[8];
	int		i;
	int		nbr_contacts;

	public:
	PhoneBook();
	void	AddContact();
	void	DisplayContactList();
	void	DisplayIndexContact();
};

#endif
