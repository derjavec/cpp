/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/11 09:15:01 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){}

AMateria::~AMateria(){}

AMateria::AMateria(const AMateria& obj)
{
    *this = obj;
}

AMateria& AMateria::operator=(const AMateria& other)
{
    if (this != &other)
    {
     type = other.type;
    }
    return (*this);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* shoots a default material at " << target.getName() << "*"<< std::endl;
}

std::string const & AMateria::getType() const
{
    return (type);
}
