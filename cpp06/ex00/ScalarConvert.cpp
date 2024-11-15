/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/15 15:16:33 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

ScalarConvert::ScalarConvert(){}
ScalarConvert::~ScalarConvert(){}
ScalarConvert::ScalarConvert(const ScalarConvert& obj)
{
     *this = obj;
}
ScalarConvert& ScalarConvert::operator=(const ScalarConvert& obj)
{   
     (void)obj;
     return (*this);
}

bool IsPrint(char c)
{
     if (c >= 32 && c <= 126)
          return (true);
     else
          return (false);
}

void ScalarConvert::convert(const std::string str)
{
     char charValue;
     if (str.length() == 1 && IsPrint(str[0]))
     {
          charValue = str[0];
          std::cout << "Char Value is : "<< charValue << std::endl;    
     }
     else
          std::cout << "Convertion to char : impossible" << std::endl;
          
     int  IntValue;
     bool isInt = 0;
     std::stringstream conv(str);
     if (conv >> IntValue && str.find('.') == std::string::npos)
     {
          std::cout << "Int Value is: "<< IntValue << std::endl;
          isInt = 1;
     }    
     else
          std::cout << "Convertion to Int : impossible" << std::endl;
          
     float FloatValue;
     conv.clear();
     conv.str(str);
     if (conv >> FloatValue)
     {
          if (isInt == 1 || str.find(".0") != std::string::npos)
               std::cout << "Float Value is: " << FloatValue << ".0f" << std::endl;
          else
               std::cout << "Float Value is: " << FloatValue << "f" << std::endl;
     }
     else
     {
          if (str == "+inf" || str == "inf" || str == "nan")
               std::cout << "Float Value is: " << str << "f" << std::endl;
          else
               std::cout << "Convertion to Float : impossible" << std::endl;
     }
         
     
     double DoubleValue;
     conv.clear();
     conv.str(str);
     if (conv >> DoubleValue)
     {
          if (isInt == 1 || str.find(".0") != std::string::npos)
               std::cout << "Double Value is: " << DoubleValue << ".0" << std::endl;
          else
               std::cout << "Double Value is: " << DoubleValue << std::endl;
     }
     else
     {
          if (str == "+inf" || str == "inf" || str == "nan")
               std::cout << "Double Value is: " << str << std::endl;
          else
               std::cout << "Convertion to Double : impossible" << std::endl;  
     }    
}
