/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:16:40 by abouhaga          #+#    #+#             */
/*   Updated: 2022/11/29 19:23:50 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Constructor Called !!" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Destructor Called !!" << std::endl;
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