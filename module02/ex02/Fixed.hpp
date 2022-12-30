/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:19:49 by abouhaga          #+#    #+#             */
/*   Updated: 2022/12/29 23:55:05 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed{

    private:

        int					_fixedPointValue;
        static const int	_fractionalBits = 8;

    public:

        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed &obj);
        ~Fixed();
 
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        
        float   toFloat( void ) const;
        int     toInt( void ) const;
        
        Fixed	&operator=(const Fixed &obj);
    
        bool	operator>(const Fixed &obj) const;
        bool	operator<(const Fixed &obj) const;
        bool	operator>=(const Fixed &obj) const;
        bool	operator<=(const Fixed &obj) const;
        bool	operator==(const Fixed &obj) const;
        bool	operator!=(const Fixed &obj) const;

        Fixed	operator+(const Fixed &obj) const;
        Fixed   operator-(const Fixed &obj) const;
        Fixed   operator*(const Fixed &obj) const;
        Fixed   operator/(const Fixed &obj) const;

        Fixed	&operator++();
        Fixed	operator++(int);
        Fixed	&operator--();
        Fixed	operator--(int);

        static Fixed	&min(Fixed &obj1, Fixed &obj2);
        static Fixed	&max(Fixed &obj1, Fixed &obj2);
        static const Fixed	&min(const Fixed &obj1, const Fixed &obj2);
        static const Fixed	&max(const Fixed &obj1, const Fixed &obj2);

};

std::ostream	&operator<<(std::ostream &output, const Fixed &obj);

#endif 