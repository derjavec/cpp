/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/07 12:44:09 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
    const Fixed x;
    const Fixed y;

public:
    Point();
    Point(const float num1, const float num2);
    ~Point();
    Point(const Point& obj);
    Fixed   getX(void) const;
    Fixed   getY(void) const;
};
Fixed area(Point const& p1, Point const& p2, Point const& p3);
bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif