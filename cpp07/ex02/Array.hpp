/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/13 14:57:18 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <exception>

template <typename T>
class Array
{
     private :
          T *array;
          unsigned int n;
     public :
          Array();
          ~Array();
          Array(unsigned int num);
          Array(const Array& obj);
          Array& operator=(const Array& obj);
          T& operator[](unsigned int const index);
          unsigned int   size() const;
          class OutOfRange : public std::exception
          {
               public :
                    const char *what() const throw()
                    {
                         return ("Index out of range");
                    }
          };
};
#include "Array.tpp"
#endif