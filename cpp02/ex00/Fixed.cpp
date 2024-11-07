/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/10/25 12:07:53 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed(): point_value(0)
{
     std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
     std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed(const Fixed& obj): point_value(obj.point_value)
{
     std::cout << "Copy constructor called" << std::endl;
}
Fixed&    Fixed::operator=(const Fixed& obj)
{
     std::cout << "Copy assignment operator called" << std::endl;
     if (this != &obj)
     {
          point_value = obj.getRawBits();
     }
     return (*this);
}

int  Fixed::getRawBits(void) const
{
     std::cout << "getRawBits member function called" << std::endl;
     return (point_value);
}

void Fixed::setRawBits(int const row)
{
     point_value = row;
}

