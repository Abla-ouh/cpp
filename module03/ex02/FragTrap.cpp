/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 14:05:43 by abouhaga          #+#    #+#             */
/*   Updated: 2022/12/31 14:12:25 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "👏 FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "👏 FragTrap Constructor called" << std::endl;
    this->_Name = name;
    this->_HitPoints = 100;
    this->_EnergyPoints = 100;
    this->_AttackDamage = 30;
}

FragTrap& FragTrap::operator=(const FragTrap& cpy)
{
    std::cout << "👏 FragTrap Assignation Operator called" << std::endl;
    this->_Name = cpy._Name;
    this->_HitPoints = cpy._HitPoints;
    this->_EnergyPoints = cpy._EnergyPoints;
    this->_AttackDamage = cpy._AttackDamage;
    return *this;
}

FragTrap::FragTrap(const FragTrap& cpy) : ClapTrap(cpy) // just in Windows to avoid the error C2248 
{
    std::cout << "👏 FragTrap Copy Constructor called" << std::endl;
    *this = cpy;
}

FragTrap::~FragTrap()
{
    std::cout << "☠️ FragTrap Destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (_HitPoints == 0)
        std::cout << "FragTrap " << _Name << " has no hit points, can't attack" << std::endl;
    else if (_EnergyPoints)
    {
        std::cout << "⚔️  FragTrap " << this->_Name << " attacks "
              << target << ", causing " << this->_AttackDamage
              << " points of damage!" << std::endl;
              _EnergyPoints--;
    }
    else
        std::cout << "FragTrap " << _Name << " has no energy points, can't attack" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "👋 High Five Guys!" << std::endl;
}


