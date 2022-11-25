/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 10:38:25 by abouhaga          #+#    #+#             */
/*   Updated: 2022/11/25 16:08:55 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.hpp"

void Contact::setFname(std::string fname)
{
	this->f_name = fname;
}
void Contact::setLname(std::string lname)
{
	this->l_name = lname;
}
void Contact::setNickname(std::string nickname)
{
	this->nickname = nickname;
}
void Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkest_secret = darkestSecret;
}
void Contact::setPhnumber(std::string phoneNumber)
{
	this->phone_number = phoneNumber;
}

std::string Contact::getFname()
{
	return (this->f_name);
}

std::string Contact::getLname()
{
	return (this->l_name);
}

std::string Contact::getNickname()
{
	return (this->nickname);
}

std::string Contact::getDarkestSecret()
{
	return (this->darkest_secret);
}

std::string Contact::getPhnumber()
{
	return (this->phone_number);
}