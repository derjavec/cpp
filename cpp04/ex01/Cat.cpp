/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/11 10:03:51 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    type = "Cat";
    brain = new Brain();
    std::cout << "The Cat default constructer has been called" << std::endl;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "The Cat default destructor has been called" << std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
    brain = new Brain(*obj.brain);
    std::cout << "The Cat copy constructer has been called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj)
{
    if (this != &obj)
    {
        Animal::operator=(obj);
        delete brain;
        brain = new Brain(*obj.brain);
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << type << " meaws!" << std::endl;
}

Brain   *Cat::GetBrain()
{
    return (brain);
}