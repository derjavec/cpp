/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/11 09:08:08 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        mat[i] = NULL;
}
MateriaSource::MateriaSource(const MateriaSource& obj)
{
    *this = obj;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
            mat[i] = other.mat[i];
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        delete mat[i];
        mat[i] = NULL;
    } 
}

void MateriaSource::learnMateria(AMateria* m)
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
    std::cout << "MateriaSource inventory full. Cannot learn more Materias." << std::endl;  
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < 4; i++)
    {
        if (mat[i] && mat[i]->getType() == type)
            return (mat[i]->clone());
    }
    std::cout << "Materia type not learned:" << type << std::endl;
    return NULL;
}
