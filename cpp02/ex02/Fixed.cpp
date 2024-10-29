/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/10/29 17:23:10 by deniseerjav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : point_value(0){}

Fixed::Fixed(const Fixed& other) : point_value(other.point_value){}

Fixed& Fixed::operator=(const Fixed& other)
{
    if (this != &other)
        this->point_value = other.point_value;
    return *this;
}

Fixed::~Fixed(){}

Fixed::Fixed(const int num)
{
    point_value = num << fract_bits;
}

Fixed::Fixed(const float num)
{
    point_value = static_cast<int>(roundf(num * (1 << fract_bits)));
}

float Fixed::toFloat(void) const
{
    return (static_cast<float>(point_value) / (1 << fract_bits));
}

int Fixed::toInt(void) const
{
    return (point_value >> fract_bits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return (out);
}

bool Fixed::operator>(const Fixed& num) const
{
    return (this->point_value > num.point_value);
}

bool Fixed::operator<(const Fixed& num) const
{
    return (this->point_value < num.point_value);
}

bool Fixed::operator>=(const Fixed& num) const
{
    return (this->point_value >= num.point_value);
}

bool Fixed::operator<=(const Fixed& num) const
{
    return (this->point_value <= num.point_value);
}

bool Fixed::operator==(const Fixed& num) const
{
    return (this->point_value == num.point_value);
}

bool Fixed::operator!=(const Fixed& num) const
{
    return (this->point_value != num.point_value);
}

Fixed Fixed::operator+(const Fixed& num)
{
    Fixed   res;
    res.point_value = this->point_value + num.point_value;
    return (res);
}

Fixed Fixed::operator-(const Fixed& num)
{
    Fixed   res;
    res.point_value = this->point_value - num.point_value;
    return (res);
}

Fixed Fixed::operator*(const Fixed& num)
{
    Fixed   res;
    res.point_value = (this->point_value * num.point_value) >> fract_bits;
    return (res);
}

Fixed Fixed::operator/(const Fixed& num)
{
    Fixed   res;
    res.point_value = (this->point_value << fract_bits) / num.point_value;
    return (res);
}

Fixed& Fixed::operator++(void)
{
    point_value++;
    return (*this);
}

Fixed& Fixed::operator--(void)
{
    point_value--;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed   tmp;
    
    tmp = *this;
    point_value++;
    return (tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed   tmp;
    
    tmp = *this;
    point_value--;
    return (tmp);
}

const Fixed&  Fixed::min(const Fixed& num1, const Fixed& num2)
{
    if (num1 < num2)
        return (num1);
    else
        return (num2);
}

const Fixed&  Fixed::max(const Fixed& num1, const Fixed& num2)
{
    if (num1 < num2)
        return (num2);
    else
        return (num1);
}

Fixed&  Fixed::max(Fixed& num1, Fixed& num2)
{
    if (num1 < num2)
        return (num2);
    else
        return (num1);
}

Fixed&  Fixed::min(Fixed& num1, Fixed& num2)
{
    if (num1 < num2)
        return (num1);
    else
        return (num2);
}