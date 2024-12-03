/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/10/31 22:24:54 by deniseerjav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name(""), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
    std::cout << "The default constructer has been called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
   std::cout << "The constructer has been called for " << name << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "The destructor has been called for " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj): name(obj.name), HitPoints(obj.HitPoints), EnergyPoints(obj.EnergyPoints), AttackDamage(obj.AttackDamage)
{
    std::cout << "The copy constructor has been called" << std::endl;
}

 ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        name = other.name;
        HitPoints = other.HitPoints;
        EnergyPoints = other.EnergyPoints;
        AttackDamage = other.AttackDamage;
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{  
    if (EnergyPoints > 0)
    {
        std::cout << RED << "ClapTrapp " << name  << " attacks " << target \
        << " causing " << AttackDamage << " points of damage!" << RESET << std::endl;
        EnergyPoints --;
    }
    else 
        std::cout << CYAN << "ClapTrapp " << name  << " has not enough Energy Points to attack " << target << RESET << std::endl; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
    HitPoints = HitPoints - amount;
    if (HitPoints < 0)
        HitPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (EnergyPoints > 0)
    {
        EnergyPoints --;
        HitPoints = HitPoints + amount;
        std::cout << BLUE << "ClapTrapp " << name << " repaires it self and gains " \
        << amount << " points!" << RESET << std::endl;
    }
    else
        std::cout << CYAN << "ClapTrapp " << name  << \
        " can't repaire it self because he has no Energy Points" << RESET << std::endl;
}

int ClapTrap::getHitPoints()
{
    return (HitPoints);
}

int ClapTrap::getEnergyPoints()
{
    return (EnergyPoints);
}

int ClapTrap::getAttackDamage()
{
    return (AttackDamage);
}

void    ClapTrap::setAttackDamage(int amount)
{
    AttackDamage = amount;
}