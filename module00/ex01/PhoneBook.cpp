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

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
	private:
		std::string f_name;
		std::string l_name;
		std::string nickname;
		std::string	darkest_secret;
		std::string phone_number;
	public:
		Contact();

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

Contact::Contact()
{
}


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
		PhoneBook(void)
		{
			current = 0;
			pos = 0;
		}
		void ft_add(void);
		//void search(void);

};

void PhoneBook::ft_add()
{
	Contact contact;

	std::cout<<"First name: ";
	getline(std::cin, f_name);
	contact.setFname(f_name);
	std::cout<<"Last name: ";
	getline(std::cin, l_name);
	contact.setLname(l_name);
	std::cout<<"Nickname: ";
	getline(std::cin, nickname);
	contact.setNickname(nickname);
	std::cout<<"Phone number: ";
	getline(std::cin, phone_number);
	contact.setPhnumber(phone_number);
	std::cout<<"Darkest secret: ";
	getline(std::cin, darkest_secret);
	contact.setDarkestSecret(darkest_secret);
	this->contacts[current % 8] = contact;
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
	int nb = 1;

	ft_display_menu();
	while(std::cin.eof() == 0)
	{
		std::cout <<
		std::getline(std::cin, cmd);
		//if (nb == 9)
		//	nb = 1;
		if (cmd == "ADD")
		//{
			phoneBook.ft_add();
		// 	nb++;
		// }
		// else if (cmd == "SEARCH")
		// 	phoneBook.search();
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
