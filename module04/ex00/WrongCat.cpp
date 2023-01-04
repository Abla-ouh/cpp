/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 02:03:11 by abouhaga          #+#    #+#             */
/*   Updated: 2023/01/04 02:23:18 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type)
{
    std::cout << "WrongCat constructor called" << std::endl;
    this->_type = type;
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal(cpy) // just in windows
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = cpy;
}

WrongCat &WrongCat::operator=(const WrongCat &oper)
{
    std::cout << "WrongCat assignation operator called" << std::endl;
    this->_type = oper._type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat sound" << std::endl;
}

