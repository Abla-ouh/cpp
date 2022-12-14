/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:04:05 by abouhaga          #+#    #+#             */
/*   Updated: 2022/12/08 00:23:13 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cerr<< "Tip : ./Sed <filename> <s1> <s2>" << std::endl;
        std::cout << "<s1> and <s2> not empty." << std::endl;
        exit (EXIT_FAILURE);
    }
    else
    {
        Sed sed(argv[1]);
        sed.replaceit(argv[2], argv[3]);
    }
    return (EXIT_SUCCESS);
}