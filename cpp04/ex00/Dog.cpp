/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/11 09:44:24 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    type = "Dog";
    std::cout << "The Dog default constructer has been called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "The Dog default destructor has been called" << std::endl;
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
    std::cout << "The Dog copy constructer has been called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj)
{
    if (this != &obj)
    {
        Animal::operator=(obj);
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << type << " barks" << std::endl;
}