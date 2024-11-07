/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/07 17:59:24 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Interface.hpp"

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
