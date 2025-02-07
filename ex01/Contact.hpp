/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 09:29:47 by maustel           #+#    #+#             */
/*   Updated: 2025/02/07 09:29:47 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Contact_HPP__
# define __Contact_HPP__

#include <iostream>

class Contact
{
	public:
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	long		PhoneNumber;
	std::string	DarkestSecret;

	Contact(std::string firstname, std::string lastname, std::string nickname, int phonenumber, std::string darkestsecret)
	{
		FirstName = firstname;
		LastName = lastname;
		NickName = nickname;
		PhoneNumber = phonenumber;
		DarkestSecret = darkestsecret;
	}

	void GetInfo()
	{
		std::cout << "First Name: " << FirstName << std::endl;
		std::cout << "Last Name: " << LastName << std::endl;
		std::cout << "Nickname: " << NickName << std::endl;
		std::cout << "Phone Number: " << PhoneNumber << std::endl;
		std::cout << "Darkest Secret: " << DarkestSecret << std::endl;
	}
};

// void	create_contact(void);

#endif
