/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/13 15:02:04 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

char randomChar()
{
     return ('a' + rand() % 26);
}

int main()
{
     srand(time(0));
     int  n = 5;
     Array<std::string> strArray(n);

     for (int i = 0; i < n; i++)
     {
          for(int j = 0; j < 5; j++)
               strArray[i] += randomChar(); 
          std::cout << "Genetared string: "<<strArray[i] << std::endl;
     }
     Array<std::string> strArrayCpy(n);
     strArrayCpy = strArray;
     std::cout << "original array address "<< &strArray << std::endl;
     std::cout << "copy array address "<< &strArrayCpy << std::endl;
     
     Array<int> strArray(n);
     
     
}