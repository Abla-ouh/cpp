/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 19:42:52 by abouhaga          #+#    #+#             */
/*   Updated: 2022/12/02 17:27:43 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType()
{
    return this->type;
}

Weapon::~Weapon()
{
	std::cout << "Weapon Destructor\n";
}

void Weapon::setType(std::string type)
{
    this->type = type;
}

Weapon::Weapon(std::string Type)
{
	this->type = Type;
}