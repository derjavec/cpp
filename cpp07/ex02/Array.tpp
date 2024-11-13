/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/13 14:59:50 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array() : array(new T[0]), n(0){}

template<typename T>
Array<T>::~Array()
{
     delete[] array;
}

template<typename T>
Array<T>::Array(unsigned int num): array(new T[num]()), n(num){}

template<typename T>
Array<T>::Array(const Array& obj)
{
     *this = obj;
}
template<typename T>
Array<T>& Array<T>::operator=(const Array& obj)
{   
     if (this != &obj)
     {
          delete[] array;
          n = obj.n;
          array = new T[n];
          for (unsigned int i = 0; i < n; i++)
               array[i] = obj.array[i];    
     }
     return (*this);
}

template<typename T>
T&   Array<T>::operator[](unsigned int const index)
{
     if (index <= n)
          return (array[index]);
     else
          throw OutOfRange();
}

template<typename T>
unsigned int   Array<T>::size() const
{
     return (n);
}

