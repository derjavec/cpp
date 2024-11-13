/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/13 13:30:58 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

char randomChar()
{
     return ('a' + rand() % 26);
}
char randomNum()
{
     return (rand() % 10);
}

int main ()
{
     srand(time(0));
     int  length = 5;
     std::string    array[length];
     
     for (int i = 0; i < length; i++)
     {
          for (int j = 0; j < 5; j++)
          {
               array[i] += randomChar();
          }
          std::cout << "Generated string is: "<< i << " "<< array[i] << std::endl;
          
     }
     iter(array, length, FindA<std::string>);
     int    iarray[length];
     for (int i = 0; i < length; i++)
     {
          iarray[i] = randomNum();
          std::cout << "Generated number is: "<< i << " "<< iarray[i] << std::endl;
          
     }
     iter(iarray, length, CheckEven<int>);
}