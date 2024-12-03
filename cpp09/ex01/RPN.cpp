/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/20 15:58:51 by deniseerjav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

rpn::rpn():stack(){}
rpn::~rpn(){}
rpn::rpn(const rpn& other):stack(other.stack){}
rpn& rpn::operator=(const rpn& other)
{
    if (this != &other)
        stack = other.stack;
    return (*this);
}
const char *rpn::InvalidInput::what() const throw()
{
     return ("Invalid Input");
}

const char *rpn::DivisionByZero::what() const throw()
{
     return ("Can't divide by zero");
}

int  rpn::calculate(std::string input)
{
    int i;
    int a;
    int b;
    int r;
    int n;
    
    i = 0;
    while (input[i])
    {
        if (std::isdigit(input[i]))
        {
            n = input[i] - 48;
            stack.push(n);
        }   
        else if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/')
        {
            if (stack.size() < 2)
                throw InvalidInput();
            else
            {
                b = stack.top();
                stack.pop();
                a = stack.top();
                stack.pop();
                switch (input[i])
                {
                    case '+':
                        r = a + b;
                        break;
                    case '-':
                        r = a - b;
                        break;
                    case '*':
                        r = a * b;
                        break;
                    case '/':
                        if (b != 0)
                        {
                             r = a / b;
                             break;
                        }
                        else
                            throw DivisionByZero();        
                }
                stack.push(r);
            }
        }
        else if (!std::isspace(input[i]))
            throw InvalidInput();
        i++;
    }
    if (stack.size() == 1)
        return (stack.top());
    else
        throw InvalidInput();
}
