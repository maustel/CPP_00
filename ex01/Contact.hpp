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

#include <iomanip>
#include <array>
#include <string>
#include <cstdlib>

#include <iostream>

class Contact
{
	private:
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	PhoneNumber;
	std::string	DarkestSecret;

	std::string	SetValue(const std::string value);

	public:
	Contact();
	~Contact();
	void		CreateContact();
	std::string GetValue(std::string attr) const;
};


#endif
