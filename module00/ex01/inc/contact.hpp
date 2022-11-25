/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:13:36 by abouhaga          #+#    #+#             */
/*   Updated: 2022/11/25 16:08:33 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string f_name;
		std::string l_name;
		std::string nickname;
		std::string	darkest_secret;
		std::string phone_number;
	public:
		Contact(){};
		~Contact(){};
		void setFname(std::string fname);
		void setLname(std::string lname);
		void setNickname(std::string nickname);
		void setDarkestSecret(std::string darkestSecret);
		void setPhnumber(std::string phoneNumber);

		std::string getFname();
		std::string getLname();
		std::string getNickname();
		std::string getDarkestSecret();
		std::string getPhnumber();
};

#endif
