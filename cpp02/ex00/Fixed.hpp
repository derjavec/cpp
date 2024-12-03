/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/10/25 10:56:43 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
     private:
          int  point_value;
          static const int    fract_bits = 8;
     public:
          Fixed();
          ~Fixed();
          Fixed(const Fixed& obj);
          Fixed& operator = (const Fixed& obj);
          int getRawBits( void ) const;
          void setRawBits( int const raw );
};

#endif