/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:14:24 by abouhaga          #+#    #+#             */
/*   Updated: 2022/11/30 19:19:03 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;
    std::cout << "The memory address of the string : " << &str << std::endl;
    std::cout << "The memory address held by stringPTR : " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF : " << &stringREF << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "The value of the string : " << str << std::endl;
    std::cout << "The value of the stringPTR : " << *stringPTR << std::endl;
    std::cout << "The value of the stringREF : " << stringREF << std::endl;
}