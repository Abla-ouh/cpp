/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:43:57 by abouhaga          #+#    #+#             */
/*   Updated: 2022/12/12 11:59:29 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* zom;
    if (N < 0 || N >= 2147483647)
    {
        std::cout << "Error : Try with a positive number in the range of int" <<std::endl;
        return (NULL);
    }
    zom = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zom[i].setName(name);
        zom[i].annouce();
    }
    return zom;
}