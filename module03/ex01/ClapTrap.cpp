/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 01:40:56 by abouhaga          #+#    #+#             */
/*   Updated: 2022/12/30 16:01:59 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _Name("default"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "👏 ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _Name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "👏 ClapTrap Constructor called for : " << _Name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "☠️  ClapTrap Deconstructor called for " << _Name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& cpy)
{
	_Name = cpy._Name;
	_HitPoints = cpy._HitPoints;
	_EnergyPoints = cpy._EnergyPoints;
	_AttackDamage = cpy._AttackDamage;
	std::cout << "👏 ClapTrap Copy Constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& cpy)
{
	_Name = cpy._Name;
	_HitPoints = cpy._HitPoints;
	_EnergyPoints = cpy._EnergyPoints;
	_AttackDamage = cpy._AttackDamage;
	std::cout << "👏 ClapTrap Copy Assignment Constructor called" << std::endl;
	return (*this);
}

void ClapTrap::attack(std::string const &target)
{
	if (_HitPoints == 0)
		std::cout << "ClapTrap " << _Name << " has no hit points, can't attack" << std::endl;
	else if (_EnergyPoints)
	{
		std::cout << "⚔️  ClapTrap " << this->_Name << " attacks "
			  << target << ", causing " << this->_AttackDamage
			  << " points of damage!" << std::endl;
			  _EnergyPoints--;
	}
	else
		std::cout << "ClapTrap " << _Name << " can't attack !" << target << "No energy points !!!" << std::endl;
}


void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "💥 ClapTrap " << _Name << " take Damage" << std::endl;
	if (_HitPoints)
		_HitPoints -= amount;
	if (_HitPoints <= 0)
		_HitPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << "🔧 ClapTrap "<< _Name << "be repaired " << amount << " hit points!" << std::endl;
		_HitPoints += amount;
		_EnergyPoints--;
	}
	else
		std::cout << "ClapTrap " << _Name << " Can't repair ! No energy points" << std::endl;
}

