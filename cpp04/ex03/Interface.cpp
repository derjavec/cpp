/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Interface.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/04 17:00:26 by deniseerjav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Interface.hpp"

AMateria::AMateria()
{
    std::cout << "The AMateria default constructer has been called" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "The AMateria destructor has been called" << std::endl;
}

AMateria::AMateria(const AMateria& obj)
{
    std::cout << "The AMateria copy constructor has been called" << std::endl;
    *this = obj;
}

AMateria& AMateria::operator=(const AMateria& other)
{
    std::cout << "AMateria copy assignment operator called" << std::endl;
    if (this != &other)
    {
     type = other.type;
    }
    return (*this);
}

std::string const & AMateria::getType() const
{
    return (type);
}

Ice::Ice()
{
    type = "ice";
    std::cout << "The Ice default constructer has been called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "The Ice destructor has been called" << std::endl;
}

Ice::Ice(const Ice& obj)
{
    std::cout << "The Ice copy constructor has been called" << std::endl;
    *this = obj;
}

Ice& Ice::operator=(const Ice& other)
{
    std::cout << "Ice copy assignment operator called" << std::endl;
    if (this != &other)
    {
     type = other.type;
    }
    return (*this);
}

Ice* Ice::clone() const
{
    Ice *new_ice =  new Ice();
    return (new_ice);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << "*"<< std::endl;
}

Cure::Cure()
{
    type = "cure";
    std::cout << "The Cure default constructer has been called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "The Cure destructor has been called" << std::endl;
}

Cure::Cure(const Cure& obj)
{
    std::cout << "The Cure copy constructor has been called" << std::endl;
    *this = obj;
}

Cure& Cure::operator=(const Cure& other)
{
    std::cout << "Cure copy assignment operator called" << std::endl;
    if (this != &other)
    {
     type = other.type;
    }
    return (*this);
}

Cure* Cure::clone() const
{
    Cure *new_cure =  new Cure();
    return (new_cure);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *"<< std::endl;
}

Character::Character() : name("")
{
    for (int i = 0; i < 4; i++)
        mat[i] = nullptr;
    std::cout << "The Character default constructer has been called" << std::endl;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        delete mat[i];
        mat[i] = nullptr;
    } 
    std::cout << "The Character destructor has been called" << std::endl;
}

Character::Character(const Character& obj)
{
    std::cout << "The Character copy constructor has been called" << std::endl;
    *this = obj;
}

Character& Character::operator=(const Character& other)
{
    std::cout << "Character copy assignment operator called" << std::endl;
    if (this != &other)
    {
        name = other.name;
        for (int i = 0; i < 4; i++)
        {
            delete mat[i];
            mat[i] = other.mat[i];
            if (other.mat[i])
                mat[i] = other.mat[i]->clone();
            else
                mat[i] = nullptr;
        }
    }
    return (*this);
}

std::string const & Character::getName() const
{
    return (name);
}

void Character::equip(AMateria* m)
{
    if (!m)
        return ;
    for(int i = 0; i < 4; i++)
    {
        if (!m)
        {
            mat[i] = m;
            std::cout << "Materia equiped!" << std::endl;
            return ;
        }
        i++;
    }
    std::cout << "Inventory is full, cannot equip more materias." << std::endl;
}

void Character::unequip(int indx)
{
    if (indx >= 0 && indx < 4){
        mat[indx] = nullptr;
        std::cout << "Unequipped materia from slot " << indx << std::endl;
    }
}

void Character::use(int indx, ICharacter& target)
{
    if (indx < 0 || indx > 3)
        return ;
    if (mat[indx] != nullptr)
        mat[indx]->use(target);
    else
        std::cout << "No Materia found " << std::endl;

}

