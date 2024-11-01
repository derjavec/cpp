/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/01 18:40:09 by deniseerjav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    HitPoints = FragTrap :: HitPoints;
    EnergyPoints = ScavTrap :: HitPoints;
    AttackDamage = FragTrap :: HitPoints;
    std::cout << "The DiamondTrap default constructer has been called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), name(name) 
{
    HitPoints = FragTrap :: HitPoints;
    EnergyPoints = ScavTrap :: HitPoints;
    AttackDamage = FragTrap :: HitPoints;
    std::cout << "The DiamondTrap constructer has been called for " << name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "The DiamondTrap destructor has been called for " << name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) : ClapTrap(obj)
{  
    std::cout << "The copy constructor has been called" << std::endl;
}

 DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
        ClapTrap::operator=(other);
    return (*this);
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << name << ", ClapTrap name: " << ClapTrap::name << std::endl;
}



