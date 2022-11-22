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
	this->l_name = lname
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
		int		contacts_nb;
	public:
		PhoneBook(void);
		void add(void);
		void search(void);

};

void PhoneBook::add(int nb)
{
	Contact contact;

	std::cout<<"First name: ";
	std::getline(std::cin, );
	std::cout<<"Last name: ";
	std::cout<<"Nickname: ";
	std::cout<< "Phone number: ";



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
	int nb = 1

	ft_display_menu();
	while(std::cin.eof() == 0)
	{
		std::getline(std::cin, cmd);
		if (nb == 9)
			nb = 1;
		if (cmd == "ADD")
		{
			phoneBook.add(nb);
			nb++;
		}
		else if (cmd == "SEARCH")
			phoneBook.search();
		else if (cmd == "EXIT")
			break;
		else
			std::cout << std::endl;
	}
	return (0);
}
