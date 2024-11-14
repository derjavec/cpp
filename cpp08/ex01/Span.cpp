/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/14 17:50:03 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

Span::Span() : _N(0){}
Span::Span(unsigned int N) : _N(N){}
Span::~Span(){}
Span::Span(const Span &obj): _N(obj._N)
{
     *this = obj;
}
Span& Span::operator=(Span const &obj)
{
     if (this != &obj)
     {
          _N = obj._N;
     }
     return (*this);
}

void Span::addNumber(int n)
{
     
}