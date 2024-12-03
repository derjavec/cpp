/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/11 09:57:09 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "The WrongAnimal default constructer has been called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "The WrongAnimal default destructor has been called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj) : type(obj.type)
{
    std::cout << "The WrongAnimal copy constructer has been called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
    if (this != &obj)
    {
        type = obj.type;
    }
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "Some Wrong animal makes a generic sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (type);
}