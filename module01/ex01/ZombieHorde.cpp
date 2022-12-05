/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:43:57 by abouhaga          #+#    #+#             */
/*   Updated: 2022/11/29 20:03:23 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* zom;
    //check negative numb
    zom = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zom[i].setName(name);
        zom[i].annouce();
    }
    return zom;
}