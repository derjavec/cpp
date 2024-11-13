/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/13 11:58:39 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <string>
#include <iostream>

template <typename T>
void swap (T &a, T &b)
{
     T tmp = a;
     a = b;
     b = tmp;
}

template <typename T>
T min (T const &a, T const &b)
{
     if (a < b)
          return (a);
     else
          return (b);
}

template <typename T>
T max (T const &a, T const &b)
{
     if (a > b)
          return (a);
     else
          return (b);
}   
#endif