/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 01:36:31 by abouhaga          #+#    #+#             */
/*   Updated: 2023/01/04 01:43:55 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
    std::cout << "Animal constructor called" << std::endl;
    this->_type = type;
}

Animal::Animal(const Animal &cpy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = cpy;
}

Animal &Animal::operator=(const Animal &oper)
{
    std::cout << "Animal assignation operator called" << std::endl;
    this->_type = oper._type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return this->_type;
}

void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}
