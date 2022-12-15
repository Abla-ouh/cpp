/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:04:04 by abouhaga          #+#    #+#             */
/*   Updated: 2022/12/15 18:32:52 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "👏 ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    _Name = name;
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "👏 ScavTrap Constructor called for : " << _Name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& cpy) : ClapTrap(_Name)
{
	_Name = cpy._Name;
	_HitPoints = cpy._HitPoints;
	_EnergyPoints = cpy._EnergyPoints;
	_AttackDamage = cpy._AttackDamage;
	std::cout << "👏 ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& cpy)
{
	_Name = cpy._Name;
	_HitPoints = cpy._HitPoints;
	_EnergyPoints = cpy._EnergyPoints;
	_AttackDamage = cpy._AttackDamage;
	std::cout << "👏 ScavTrap Copy Assignment Constructor called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "☠️  ScavTrap Deconstructor called for " << _Name << std::endl;
}

void ScavTrap::attack(std::string const &target)
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
		std::cout << "ScavTrap " << _Name << " can't attack !" << target << " No energy points!!!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "🚨 Gate keeper mode activated !!!" << std::endl;
}
