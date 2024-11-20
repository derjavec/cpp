/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/20 15:33:08 by deniseerjav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN
#define RPN

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <exception>
#include <stack>


class rpn
{
    private :
         std::stack<int> stack;   
    public :
          rpn();
          ~rpn();
          rpn(const rpn& other);
          rpn& operator=(const rpn& other);
          class InvalidInput: public std::exception
          {
               public :
                    const char *what() const throw();
          };
           class DivisionByZero: public std::exception
          {
               public :
                    const char *what() const throw();
          };
          int calculate(std::string input);
};

#endif