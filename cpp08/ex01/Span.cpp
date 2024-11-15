/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/15 16:46:07 by derjavec         ###   ########.fr       */
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

unsigned int   Span::getN() const
{
     return (_N);
}
std::ostream& operator<<(std::ostream& out, const Span& span)
{
    out << span.getN();
    return (out);
}

const char *Span::Spanfilled::what() const throw()
{
     return ("Vector has no space left");
}

const char *Span::EmptySpan::what() const throw()
{
     return ("Vector is empty");
}

void Span::addNumber(int n)
{
     if (_vec.size() >= _N)
          throw Spanfilled();
     else
          _vec.push_back(n);
}

int Span::longestSpan() const
{
     if (_vec.size() < 2)
          throw EmptySpan();
     else
     {
          int min = *std::min_element(_vec.begin(), _vec.end());
          int max = *std::max_element(_vec.begin(), _vec.end());
          int res =  max - min;
          return (res);
     }        
}

int Span::shortestSpan() const
{
     if (_vec.size() < 2)
          throw EmptySpan();
     else
     {
          std::vector<int>    sortVec = _vec;
          std::sort(sortVec.begin(), sortVec.end());
          int min = std::numeric_limits<int>::max();
          for (unsigned long int i = 1; i < sortVec.size(); ++i)
          {
               min = std::min(min, sortVec[i] - sortVec[i - 1]);
          }
          return (min);
     }        
}