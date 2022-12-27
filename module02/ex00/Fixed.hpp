/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 22:44:05 by abouhaga          #+#    #+#             */
/*   Updated: 2022/12/27 22:44:05 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed{

    public:

        Fixed();
        Fixed(const Fixed &obj);
        ~Fixed();

        Fixed	&operator=(const Fixed &obj);

        int		getRawBits(void) const;
        void	setRawBits(int const raw);

    private:

        int					_fixedPointValue;
        static const int	_fractionalBits = 8;
};

#endif 
