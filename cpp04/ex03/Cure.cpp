/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/11 09:07:16 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    type = "cure";
}

Cure::~Cure(){}

Cure::Cure(const Cure& obj)
{
    *this = obj;
}

Cure& Cure::operator=(const Cure& other)
{
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
