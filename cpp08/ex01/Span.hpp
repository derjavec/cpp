/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/14 17:49:42 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <string>
#include <iostream>
#include <exception>

class Span
{
     private :
          unsigned int _N;
     public:
          Span();
          Span(unsigned int N);
          ~Span();
          Span(const Span& obj);
          Span& operator=(Span const &obj);
          void addNumber(int n);
          Span & shortestSpan();
          Span& longestSpan();
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
#endif