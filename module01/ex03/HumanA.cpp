/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:13:51 by abouhaga          #+#    #+#             */
/*   Updated: 2022/12/02 00:32:31 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name_p, Weapon  &weapon_p) : name(name_p), weapon(weapon_p){}

HumanA::~HumanA()
{
	std::cout << "HumanA destructor called !\n";
}

void	HumanA::setName(std::string name)
{
	this->name = name;
}

std::string	HumanA::getName()
{
	return (this->name);
}

void	HumanA::attack()
{
	std::cout << this->getName() << " attacks with their " << this->weapon.getType()<< std::endl;
}