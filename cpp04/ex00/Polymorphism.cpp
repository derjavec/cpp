/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorphism.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/02 16:31:12 by deniseerjav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorphism.hpp"

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

Cat::Cat() : Animal()
{
    type = "Cat";
    std::cout << "The Cat default constructer has been called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "The Cat default destructor has been called" << std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
    std::cout << "The Cat copy constructer has been called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj)
{
    if (this != &obj)
    {
        Animal::operator=(obj);
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << type << " meaws!" << std::endl;
}

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

WrongCat::WrongCat() : WrongAnimal()
{
    type = "Dog";
    std::cout << "The WrongCat default constructer has been called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "The WrongCat default destructor has been called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal(obj)
{
    std::cout << "The WrongCat copy constructer has been called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
    if (this != &obj)
    {
        WrongAnimal::operator=(obj);
    }
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << type << " meaws!" << std::endl;
}