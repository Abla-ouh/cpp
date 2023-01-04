/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 01:45:48 by abouhaga          #+#    #+#             */
/*   Updated: 2023/01/04 02:14:52 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    this->_type = "Cat";
}

Cat::Cat(const Cat &cpy) : Animal(cpy) // just in windows
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = cpy;
}

Cat &Cat::operator=(const Cat &oper)
{
    std::cout << "Cat assignation operator called" << std::endl;
    this->_type = oper._type;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Cat sound" << std::endl;
}
