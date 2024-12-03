/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/11 09:14:21 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("")
{
    for (int i = 0; i < 4; i++)
        mat[i] = NULL;
}
Character::Character(std::string name) : name(name)
{
    for (int i = 0; i < 4; i++)
        mat[i] = NULL;
}
Character::Character(const Character& obj)
{
    *this = obj;
}

Character& Character::operator=(const Character& other)
{
    if (this != &other)
    {
        name = other.name;
        for (int i = 0; i < 4; i++)
            mat[i] = other.mat[i];
    }
    return (*this);
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        delete mat[i];
        mat[i] = NULL;
    } 
}

std::string const & Character::getName() const
{
    return (name);
}

void Character::equip(AMateria* m)
{
    int i;

    i = 0;
    while (mat[i])
        i++;
    if (i < 4)
    {
        mat[i] = m;
        return ;   
    }
    std::cout << "Inventory is full, cannot equip more materias." << std::endl;
}

void Character::unequip(int indx)
{
    if (indx >= 0 && indx < 4){
        mat[indx] = NULL;
        std::cout << "Unequipped materia from slot " << indx << std::endl;
    }
}

void Character::use(int indx, ICharacter& target)
{
    if (indx < 0 || indx > 3)
        return ;
    if (mat[indx] != NULL)
        mat[indx]->use(target);
    else
        std::cout << "No Materia found " << std::endl;

}
