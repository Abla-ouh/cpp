/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 16:03:33 by abouhaga          #+#    #+#             */
/*   Updated: 2022/12/30 16:03:46 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap r1("ZER0");
    ScavTrap r2("AXTON");

    r1.attack("AXTON");
    r2.takeDamage(10);
    r2.beRepaired(20);
    r2.attack("ZER0");
    r1.takeDamage(10);
    r1.attack("AXTON");
    return (0);
}