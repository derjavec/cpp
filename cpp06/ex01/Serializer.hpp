/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/12 11:41:24 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <string>
#include <iostream>
#include <stdint.h>
#include "Data.hpp"

class Serializer
{ 
     public :
          static uintptr_t serialize(Data* ptr);
          static Data* deserialize(uintptr_t raw);
     private :
          Serializer(void);
          Serializer(Serializer const & copy);
          ~Serializer(void);
          Serializer & operator =(Serializer const & src);
};
          
#endif