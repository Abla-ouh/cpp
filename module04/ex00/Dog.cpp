/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 01:46:58 by abouhaga          #+#    #+#             */
/*   Updated: 2023/01/04 02:14:31 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    this->_type = "Dog";
}

Dog::Dog(const Dog &cpy): Animal(cpy) // just in windows
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = cpy;
}

Dog &Dog::operator=(const Dog &oper)
{
    std::cout << "Dog assignation operator called" << std::endl;
    this->_type = oper._type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Dog sound" << std::endl;
}