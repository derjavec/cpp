/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/07 12:44:03 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0){}

Point::Point(const Point& obj): x(obj.x), y(obj.y){}

Point::Point(const float num1, const float num2) : x(Fixed(num1)), y(Fixed(num2)){}

Fixed   Point::getX(void) const
{
   return (x); 
}

Fixed   Point::getY(void) const
{
   return (y); 
}

Point::~Point(){};




