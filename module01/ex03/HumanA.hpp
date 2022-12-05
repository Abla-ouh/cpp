/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 22:30:14 by abouhaga          #+#    #+#             */
/*   Updated: 2022/12/02 17:57:05 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon  &weapon;
    public:
        HumanA(std::string name_p, Weapon  &weapon_p);
        ~HumanA();
        void setName(std::string name);
        std::string getName(void);
        void	attack();
};

#endif