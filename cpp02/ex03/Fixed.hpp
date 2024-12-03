/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/10/30 13:38:08 by deniseerjav      ###   ########.fr       */
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
    bool operator>(const Fixed& num) const;
    bool operator<(const Fixed& num) const;
    bool operator>=(const Fixed& num) const;
    bool operator<=(const Fixed& num) const;
    bool operator==(const Fixed& num) const;
    bool operator!=(const Fixed& num) const;
    Fixed operator+(const Fixed& num);
    Fixed operator-(const Fixed& num);
    Fixed operator*(const Fixed& num);
    Fixed operator/(const Fixed& num);
    Fixed& operator++(void);
    Fixed& operator--(void);
    Fixed operator++(int);
    Fixed operator--(int);
    static const Fixed&  max(const Fixed& num1, const Fixed& num2);
    static const Fixed&  min(const Fixed& num1, const Fixed& num2);
    static Fixed&  max(Fixed& num1, Fixed& num2);
    static Fixed&  min(Fixed& num1, Fixed& num2);
    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits(void) const;
    void setRawBits(int const raw);
    Fixed abs() const;
};
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);
#endif
