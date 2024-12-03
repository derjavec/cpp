/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/11 09:46:25 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

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