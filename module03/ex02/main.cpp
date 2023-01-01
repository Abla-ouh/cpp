/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 14:12:47 by abouhaga          #+#    #+#             */
/*   Updated: 2022/12/31 15:14:01 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap frag("FragTrap");
    frag.attack("target");
    frag.takeDamage(100);
    frag.highFivesGuys();
    frag.attack("target");
    return 0;
}