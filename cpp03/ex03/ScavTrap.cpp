/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/01 18:29:39 by deniseerjav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << "The ScavTrap default constructer has been called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << "The ScavTrap constructer has been called for " << name << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "The ScavTrap destructor has been called for " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj)
{  
    std::cout << "The copy constructor has been called" << std::endl;
}

 ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
        ClapTrap::operator=(other);
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (EnergyPoints > 0)
    {
        std::cout << RED << "ScavTrapp " << name  << " attacks " << target \
        << " causing " << AttackDamage << " points of damage!" << RESET << std::endl;
        EnergyPoints --;
    }
    else 
        std::cout << CYAN << "ScavTrapp " << name  << " has not enough Energy Points to attack " << target << RESET << std::endl; 
}

void ScavTrap::guardGate()
{
    std::cout << BLUE << "ScavTrap " << name << " is now in Gate keeper mode" << RESET << std::endl; ;
}
