/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/10/18 15:07:34 by deniseerjav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon(nullptr) {}

void    HumanB::setWeapon(Weapon &new_weapon)
{
    weapon = &new_weapon;
}

void    HumanB::attack() const
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() <<std::endl;
    else
        std::cout << name << " has no weapon" << std::endl;
}