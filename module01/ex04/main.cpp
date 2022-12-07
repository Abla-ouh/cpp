/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:04:05 by abouhaga          #+#    #+#             */
/*   Updated: 2022/12/05 12:16:53 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char** argv)
{
    if (argc != 4 || *argv[2] == '\0' || *argv[3] == '\0')
    {
        std::cout << "Tip : ./replace <file> <s1> <s2>" << std::endl;
        std::cout << "<s1> and <s2> not empty." << std::endl;
        return (1);
    }
    /*basic_ifstream();
    
        --only instantiation
        explicit basic_ifstream(const char* s, ios_base::openmode mode = ios_base::in);
        -- instantiation of the ifstream object and opening of file
        explicit basic_ifstream(const string& s, ios_base::openmode mode = ios_base::in);
        string str = "dir1/txtFile.txt";
        ifstream ifs = ifstream(str, ios_base::in);
    */
    std::string infile(argv[1]);
    std::ifstream   fin(infile);
    if (fin.is_open() && std::string(*argv[2]).empty())
    
    
}