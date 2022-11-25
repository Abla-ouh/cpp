/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:43:45 by abouhaga          #+#    #+#             */
/*   Updated: 2022/11/10 15:43:45 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.hpp"

PhoneBook::PhoneBook()
{
	current = 0;
	pos = 0;
}

void get_check_assign(std::string &value, std::string str)
{
	std::cout<< str;
	while (std::getline(std::cin, value))
	{
		if (value.empty())
		{
			std::cout<<"Invalid input try again ...\n";
			std::cout<< str;
			//getline(std::cin, value);
		}
		else
			break;
	}
}
std::string ft_resize(std::string str)
{
	if(str.length() > 10)
	{
		str.erase(str.begin() + 9, str.end());
		str.append(".");
	}
	return (str);
}

void PhoneBook::ft_display_list()
{
	std::cout<< "|     Index|First name| Last name| Nickname | \n";
	for (int i = 0; i < (int)this->pos; i++)
	{
		std::cout
		<< "|" << std::setw(10) << i
		<< "|" << std::setw(10) << ft_resize(this->contacts[i].getFname())
		<< "|" << std::setw(10) << ft_resize(this->contacts[i].getLname())
		<< "|" << std::setw(10) << ft_resize(this->contacts[i].getNickname()) << "|"
		<< std::endl;
	}
}

void PhoneBook::search()
{
	int contact_index;

	ft_display_list();
	std::cout<< "Enter the index of the entry to display : ";
	std::cin >> contact_index;
	if (std::cin.fail())
		std::cout << "Error : Invalid Input";
	else
	{
		if (contact_index < this->pos)
		{
			std::cout << "First name: " << this->contacts[contact_index].getFname() << std::endl;
			std::cout << "Last name: " << this->contacts[contact_index].getLname() << std::endl;
			std::cout << "Nickname: " << this->contacts[contact_index].getNickname() << std::endl;
			std::cout << "Phone number: " << this->contacts[contact_index].getPhnumber() << std::endl;
			std::cout << "Darkest Secret: " << this->contacts[contact_index].getDarkestSecret() << std::endl;
		}
	}
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');

}

void PhoneBook::add()
{
	Contact ctc;

	get_check_assign(f_name, "First name: ");
	ctc.setFname(f_name);
	get_check_assign(l_name, "Last name: ");
	ctc.setLname(l_name);
	get_check_assign(nickname, "Nickname: ");
	ctc.setNickname(nickname);
	get_check_assign(phone_number, "Phone number: ");
	ctc.setPhnumber(phone_number);
	get_check_assign(darkest_secret, "Darkest secret: ");
	ctc.setDarkestSecret(darkest_secret);
	this->contacts[current % 8] = ctc;
	this->current++;
	if (this->current <= 8)
		this->pos = this->current;
	std::cout << "ADDED SUCCESSFULY" << std::endl;
}

void ft_display_menu()
{
	std::cout << " ------------------PHONEBOOK------------------ " << std::endl;
	std::cout << "|             Please enter a command:          |" << std::endl;
	std::cout << "|                     1-ADD                    |" << std::endl;
	std::cout << "|                   2-SEARCH                   |" << std::endl;
	std::cout << "|                     3-EXIT                   |" << std::endl;
	std::cout << " ---------------------------------------------" << std::endl;
}

int main()
{
	PhoneBook phoneBook;
	std::string cmd;

	ft_display_menu();
	while(std::cin.eof() == 0)
	{
		std::cout << "> ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			phoneBook.add();
		else if (cmd == "SEARCH")
			phoneBook.search();
		else if (cmd == "EXIT")
		{
			std::cout << "GOOD BYE !"<<std::endl;
			break;
		}
		else
			std::cout << "COMMAND NOT FOUND !"<<std::endl;
	}
	return (0);
}
