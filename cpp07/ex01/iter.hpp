/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/13 13:29:37 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

template <typename T>
void CheckEven(const T& num)
{
     if (num %2 == 0)
          std::cout << num << " Is Even" << std::endl;
     else
          std::cout << num << " Is Odd" << std::endl;
}

template <typename T>
void FindA(const T& str)
{
     if (str.find("a") != std::string::npos)
          std::cout << "Contains 'a'" << std::endl;
     else
          std::cout << "Doesn't contains 'a'" << std::endl;
}

template <typename T, typename Func>
void iter (T *a, int b, Func c)
{
     for(int i = 0; i < b; i++)
     {
          c(a[i]);
     }
     return ;
}
#endif