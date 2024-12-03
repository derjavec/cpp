/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/10/29 10:53:51 by deniseerjav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int point_value;
    static const int fract_bits = 8;

public:
    Fixed();
    Fixed(const int num);
    Fixed(const float num);
    ~Fixed();
    Fixed(const Fixed& obj);
    Fixed& operator=(const Fixed& obj);
    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits(void) const;
    void setRawBits(int const raw);
};
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);
#endif
