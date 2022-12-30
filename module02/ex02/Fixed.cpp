/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:45:04 by abouhaga          #+#    #+#             */
/*   Updated: 2022/12/29 23:57:00 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/************************** CONSTRUCTORS ****************************/
Fixed::Fixed()
{
    //std::cout << "Default constructor called" << std::endl;
    this->_fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &obj)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed::Fixed(const int value)
{
    this->_fixedPointValue = value << this->_fractionalBits;
}

Fixed::Fixed(const float value) // float to fixed point
{
    this->_fixedPointValue = roundf(value * (1 << this->_fractionalBits));
}

/************************** DESTRUCTOR ****************************/
Fixed::~Fixed()
{
    //std::cout << "Destructor called" << std::endl;
}

/************************** GETTERS & SETTERS ****************************/
int     Fixed::getRawBits( void ) const
{
    return this->_fixedPointValue;
}

void    Fixed::setRawBits( int const raw )
{
	this->_fixedPointValue = raw;
}

/************************** ASSIGNATION OPERATOR ****************************/

Fixed	&Fixed::operator=(const Fixed &obj)
{
    //std::cout << "Assignation operator called" << std::endl;
    this->_fixedPointValue = obj.getRawBits();
    return *this;
}

/************************** NON MEMBER FUNCTION ****************************/

std::ostream	&operator<<(std::ostream &output, const Fixed &obj)
{
    output << obj.toFloat();   
    return output;
}

/************************** MEMBER FUNCTIONS ****************************/

float   Fixed::toFloat( void ) const // fixed point to float
{
	return (float)this->_fixedPointValue / (1 << this->_fractionalBits);
}

int     Fixed::toInt( void ) const // fixed point to int
{
	return this->_fixedPointValue >> this->_fractionalBits;
}


/*************** Comparison Operators ************************/

bool	Fixed::operator>(const Fixed &obj) const
{
    return this->_fixedPointValue > obj.getRawBits();
}

bool	Fixed::operator<(const Fixed &obj) const
{
    return this->_fixedPointValue < obj.getRawBits();
}

bool	Fixed::operator>=(const Fixed &obj) const
{
    return this->_fixedPointValue >= obj.getRawBits();
}

bool	Fixed::operator<=(const Fixed &obj) const
{
    return this->_fixedPointValue <= obj.getRawBits();
}

bool	Fixed::operator==(const Fixed &obj) const
{
    return this->_fixedPointValue == obj.getRawBits();
}

bool	Fixed::operator!=(const Fixed &obj) const
{
	return this->_fixedPointValue != obj.getRawBits();
}


/*************** Arithmetic Operators ************************/

Fixed	Fixed::operator+(const Fixed &obj) const
{
	return Fixed(this->toFloat() + obj.toFloat());
}

Fixed	Fixed::operator-(const Fixed &obj) const
{
	return Fixed(this->toFloat() - obj.toFloat());
}

Fixed	Fixed::operator*(const Fixed &obj) const
{
	return Fixed(this->toFloat() * obj.toFloat());
}

Fixed	Fixed::operator/(const Fixed &obj) const
{
	return Fixed(this->toFloat() / obj.toFloat());
}

/*************** Increment Operators ************************/

Fixed	&Fixed::operator++(void)
{
	this->_fixedPointValue++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->operator++();
	return tmp;
}

/*************** Decrement Operators ************************/

Fixed	&Fixed::operator--(void)
{
	this->_fixedPointValue--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->operator--();
	return tmp;
}

/*************** Min & Max ************************/

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return a < b ? a : b;
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return a > b ? a : b;
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	return a < b ? a : b;
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	return a > b ? a : b;
}

