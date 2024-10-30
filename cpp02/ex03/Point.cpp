/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/10/30 13:56:16 by deniseerjav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0){}

Point::Point(const Point& obj): x(obj.x), y(obj.y){}

Point::Point(const float num1, const float num2) : x(Fixed(num1)), y(Fixed(num2)){}

// Point& Point::operator=(const Point& other)
// {
//     // if (this != &other)
//     // {
//     //      this->x = other.x;
//     //      this->y = other.y;
//     // }       
//     return (*this);
// }

Fixed   Point::getX(void) const
{
   return (x); 
}

Fixed   Point::getY(void) const
{
   return (y); 
}

Point::~Point(){};




