/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 02:24:19 by abouhaga          #+#    #+#             */
/*   Updated: 2023/01/04 02:39:35 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
    *this = cpy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &oper)
{
    std::cout << "WrongAnimal Assignation operator called" << std::endl;
    this->_type = oper._type;
    return *this;
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "WrongAnimal constructor called" << std::endl;
    this->_type = type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &oper)
{
    std::cout << "WrongAnimal Assignation operator called" << std::endl;
    this->_type = oper._type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->_type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
}
