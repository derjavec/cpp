/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/07 17:58:40 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Interface.hpp"

Ice::Ice()
{
    type = "ice";
}

Ice::~Ice(){}

Ice::Ice(const Ice& obj)
{
    *this = obj;
}

Ice& Ice::operator=(const Ice& other)
{
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
