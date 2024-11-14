/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/14 16:26:38 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <string>
#include <iostream>
#include <exception>
#include  <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

class NotFound : public  std::exception
{
     const char* what() const throw()
     {
          return ("Value not found");
     }
};
template <typename T>
typename T::iterator easyfind(T& container, const int b)
{
     typename T::iterator it;
     
     it = std::find(container.begin(), container.end(), b);
     if (it  == container.end())
          throw NotFound();
     return (it);
}
#endif