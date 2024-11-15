/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/15 16:25:23 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <string>
#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>
#include <limits>

class Span
{
     private :
          unsigned int _N;
          std::vector<int> _vec;
          Span();
     public:
          Span(unsigned int N);
          ~Span();
          Span(const Span& obj);
          Span& operator=(Span const &obj);
          void addNumber(int n);
          int shortestSpan() const;
          int longestSpan() const;
          unsigned int getN() const;
          class Spanfilled: public std::exception
          {
               public :
                    const char *what() const throw();
          };
          class EmptySpan : public std::exception
          {
               public :
                    const char *what() const throw();   
          };         
};
std::ostream& operator<<(std::ostream& out, const Span& Span);
#endif