/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 23:12:03 by abouhaga          #+#    #+#             */
/*   Updated: 2022/12/08 01:32:54 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string infile): in(infile)
{
    this->out = this->in + ".replace";
}

Sed::~Sed ( void ) {

}

void Sed::replaceit(std::string toFind, std::string replaceW)
{
    std::ifstream fin(this->in);
    
    if (fin.is_open())
    {
        std::string data;
        if(std::getline(fin, data, '\0'))
        {
            std::ofstream fout(this->out);
            size_t found = data.find(toFind);
            while (found != std::string::npos)
            {
                data.erase(found, toFind.length());
                data.insert(found, replaceW);
                found = data.find(toFind);
            }
            fout << data;
            fout.close();
        }
        else
            std::cerr << "Error : Empty file" << std::endl;
        fin.close();
    }
    else
    {
        std::cerr << "Error : File cannot be opened" << std::endl;
        exit (EXIT_FAILURE);
    }
    
}