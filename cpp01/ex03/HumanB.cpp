/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/06 09:03:30 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon(NULL) {}

void    HumanB::setWeapon(Weapon &new_weapon)
{
    weapon = &new_weapon;
}
HumanB::~HumanB(){}

void    HumanB::attack() const
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() <<std::endl;
    else
        std::cout << name << " has no weapon" << std::endl;
}