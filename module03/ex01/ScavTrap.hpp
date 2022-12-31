/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 14:02:00 by abouhaga          #+#    #+#             */
/*   Updated: 2022/12/30 16:11:34 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SVAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
		ScavTrap(std::string name);
		ScavTrap& operator=(const ScavTrap& cpy);
		ScavTrap(const ScavTrap& cpy);
		~ScavTrap();

        void attack(const std::string& target);
        void guardGate();
};

#endif