/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/11 10:02:22 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    type = "Dog";
    brain = new Brain();
    std::cout << "The Dog default constructer has been called" << std::endl;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "The Dog default destructor has been called" << std::endl;
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
    brain = new Brain(*obj.brain);
    std::cout << "The Dog copy constructer has been called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj)
{
    if (this != &obj)
    {
        Animal::operator=(obj);
        delete brain;
        brain = new Brain(*obj.brain);
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << type << " barks" << std::endl;
}

Brain   *Dog::GetBrain()
{
    return (brain);
}
