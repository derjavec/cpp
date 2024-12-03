/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/11 09:43:51 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "The Animal default constructer has been called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "The Animal default destructor has been called" << std::endl;
}

Animal::Animal(const Animal& obj) : type(obj.type)
{
    std::cout << "The Animal copy constructer has been called" << std::endl;

}

Animal& Animal::operator=(const Animal& obj)
{
    if (this != &obj)
    {
        type = obj.type;
    }
    return (*this);
}

void Animal::makeSound() const
{
    std::cout << "Some animal makes a generic sound" << std::endl;
}

std::string Animal::getType() const
{
    return (type);
}
