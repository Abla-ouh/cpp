/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 14:01:50 by abouhaga          #+#    #+#             */
/*   Updated: 2022/12/30 16:39:28 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "👏 ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "👏 ScavTrap Constructor called" << std::endl;
    this->_Name = name;
    this->_HitPoints = 100;
    this->_EnergyPoints = 50;
    this->_AttackDamage = 20;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& cpy)
{
    std::cout << "👏 ScavTrap Assignation Operator called" << std::endl;
    this->_Name = cpy._Name;
    this->_HitPoints = cpy._HitPoints;
    this->_EnergyPoints = cpy._EnergyPoints;
    this->_AttackDamage = cpy._AttackDamage;
    return *this;
}

ScavTrap::ScavTrap(const ScavTrap& cpy) : ClapTrap(cpy) // just in Windows to avoid the error C2248 
{
    std::cout << "👏 ScavTrap Copy Constructor called" << std::endl;
    *this = cpy;
}


ScavTrap::~ScavTrap()
{
    std::cout << "☠️ ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (_HitPoints == 0)
		std::cout << "ScavTrap " << _Name << " has no hit points, can't attack" << std::endl;
	else if (_EnergyPoints)
	{
		std::cout << "⚔️  ScavTrap " << this->_Name << " attacks "
			  << target << ", causing " << this->_AttackDamage
			  << " points of damage!" << std::endl;
			  _EnergyPoints--;
	}
	else
		std::cout << "ScavTrap " << _Name << " can't attack !" << target << "No energy points !!!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << " 🛡️ ScavTrap " << _Name << " has enterred in Gate keeper mode" << std::endl;
}
