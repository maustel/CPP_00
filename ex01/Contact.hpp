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
	private:
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	long		PhoneNumber;
	std::string	DarkestSecret;

	public:
	Contact();
	void	create_contact();
	void GetInfo();
	// Contact(std::string firstname, std::string lastname, std::string nickname, int phonenumber, std::string darkestsecret)
	// {
	// 	FirstName = firstname;
	// 	LastName = lastname;
	// 	NickName = nickname;
	// 	PhoneNumber = phonenumber;
	// 	DarkestSecret = darkestsecret;
	// }
};


#endif
