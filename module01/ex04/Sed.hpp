/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 22:44:15 by abouhaga          #+#    #+#             */
/*   Updated: 2022/12/08 00:23:06 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP

#define SED_HPP

#include <iostream>
#include <fstream>

class Sed
{
    private :
        std::string in;
        std::string out;
    public:
        Sed(std::string infile);
        ~Sed();
        void replaceit(std::string s1, std::string s2);
};
#endif
