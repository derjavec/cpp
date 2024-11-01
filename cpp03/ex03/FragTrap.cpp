/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/01 17:33:20 by deniseerjav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "The FragTrap default constructer has been called" << std::endl;
}

FragTrap::FragTrap(std::string name) :  ClapTrap(name)
{
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "The FragTrap constructer has been called for " << name << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "The FragTrap destructor has been called for " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{  
    std::cout << "The copy constructor has been called" << std::endl;
}

 FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
        ClapTrap::operator=(other);
    return (*this);
}

void FragTrap::attack(const std::string& target)
{
    if (EnergyPoints > 0)
    {
        std::cout << RED << "FragTrapp " << name  << " attacks " << target \
        << " causing " << AttackDamage << " points of damage!" << RESET << std::endl;
        EnergyPoints --;
    }
    else 
        std::cout << CYAN << "FragTrapp " << name  << " has not enough Energy Points to attack " << target << RESET << std::endl; 
}

void FragTrap::highFivesGuys(void)
{
    std::cout << BLUE << "FragTrap " << name << " asks everyone for a High Five! ✋" << RESET << std::endl;
}
