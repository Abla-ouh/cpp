/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:46:31 by abouhaga          #+#    #+#             */
/*   Updated: 2022/12/15 18:17:49 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap r1("ZER0");
	ScavTrap r2("AXTON");

	r1.attack("AXTON");
	r2.takeDamage(10);
	r2.beRepaired(20);
	r2.attack("ZER0");
	r1.takeDamage(10);
	r1.attack("AXTON");
	return (0);
}