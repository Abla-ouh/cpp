/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 01:40:56 by abouhaga          #+#    #+#             */
/*   Updated: 2022/12/15 01:50:39 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _Name("default"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _Name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "ClapTrap Constructor called for the name : " << _Name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Deconstructor called for " << _Name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& cpy)
{
	_Name = cpy._Name;
	_HitPoints = cpy._HitPoints;
	_EnergyPoints = cpy._EnergyPoints;
	_AttackDamage = cpy._AttackDamage;
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
}