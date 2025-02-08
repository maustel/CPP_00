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
// #include <list>

#include "Contact.hpp"

class PhoneBook
{
	private:
	Contact	ContactList[8];
	int		i;

	public:
	PhoneBook();
	void	AddContact();

};


// void	create_contact(Contact& contact);

#endif
