/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/10/30 13:52:45 by deniseerjav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed area(Point const& p1, Point const& p2, Point const& p3)
{
    Fixed   res;

    res = (p1.getX() *(p2.getY() - p3.getY()) + \
            p2.getX() *(p1.getY() - p3.getY()) + \
            p3.getX() *(p1.getY() - p2.getY())).abs();   
    return (res / Fixed(2));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed   totalArea;
    Fixed   pabArea;
    Fixed   pcbArea;
    Fixed   pacArea;
    Fixed   sum;
    
    totalArea = area(a, b, c);
    pabArea  = area(point, a, b);
    pcbArea  = area(point, c, b);
    pacArea  = area(point, a, c);
    sum = pabArea + pcbArea + pacArea;
    return (sum == totalArea);
}