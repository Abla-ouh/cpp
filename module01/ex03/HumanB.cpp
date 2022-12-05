/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 00:44:03 by abouhaga          #+#    #+#             */
/*   Updated: 2022/12/02 18:13:44 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string Name): name(Name), weapon(NULL) {}

HumanB::~HumanB()
{
	std::cout << "HumanB destructor called !\n";
}
std::string	HumanB::getName()
{
	return this->name;
}

void	HumanB::setName(std::string name)
{
	this->name = name;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
void	HumanB::attack()
{
	if (this->weapon != NULL)
		std::cout << this->getName() << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << this->getName() << " attacks with their (null)" << std::endl;
}
