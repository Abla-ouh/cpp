/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:39:34 by abouhaga          #+#    #+#             */
/*   Updated: 2022/11/29 19:52:27 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Constructor Called !!" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Destructor Called for the " << this->name << " Zombie !!" << std::endl;
}

std::string Zombie::getName()
{
    return this->name;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

void Zombie::annouce()
{
    std::cout << getName() << " : BraiiiiiiinnnzzzZ..." << std::endl;
}