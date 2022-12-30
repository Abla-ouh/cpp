/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:45:04 by abouhaga          #+#    #+#             */
/*   Updated: 2022/12/30 13:28:44 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed::Fixed(const int value)
{
    this->_fixedPointValue = value << this->_fractionalBits;
}

Fixed::Fixed(const float value)
{
    this->_fixedPointValue = roundf(value * (1 << this->_fractionalBits));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &obj)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_fixedPointValue = obj.getRawBits();
    return *this;
}

int     Fixed::getRawBits( void ) const
{
    return this->_fixedPointValue;
}

void    Fixed::setRawBits( int const raw )
{
	this->_fixedPointValue = raw;
}

float   Fixed::toFloat( void ) const
{
	return (float)this->_fixedPointValue / (1 << this->_fractionalBits);
}

int     Fixed::toInt( void ) const
{
	return this->_fixedPointValue >> this->_fractionalBits;
}

std::ostream	&operator<<(std::ostream &output, const Fixed &obj)
{
    output << obj.toFloat();   
    return output;
}
