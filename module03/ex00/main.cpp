/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:55:06 by abouhaga          #+#    #+#             */
/*   Updated: 2022/12/15 16:42:35 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap r1("ZER0");
	ClapTrap r2("AXTON");

	r1.attack("AXTON");
	r2.takeDamage(10);
	r2.beRepaired(20);
	r2.attack("ZER0");
	r1.takeDamage(10);
	r1.attack("AXTON");
	return (0);
}