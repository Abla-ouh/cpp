/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 10:39:14 by abouhaga          #+#    #+#             */
/*   Updated: 2022/11/26 11:01:05 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <string>
#include <climits>
# include <iomanip>
#include "./contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int	current;
		int pos;
		std::string f_name;
		std::string l_name;
		std::string nickname;
		std::string	darkest_secret;
		std::string phone_number;
	public:
		PhoneBook();
		~PhoneBook(){};
		void ft_display_list();
		void get_check_assign(std::string &value, std::string str);
		void add(void);
		void search(void);
};

#endif