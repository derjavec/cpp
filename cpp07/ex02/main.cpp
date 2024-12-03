/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/14 15:01:55 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

char randomChar()
{
     return ('a' + rand() % 26);
}
char randomNum()
{
     return (rand() % 10);
}

int main()
{
     srand(time(0));
     std::cout << "Testing with a string array of size n = 5:\n" << std::endl;
     int  n = 5;
     Array<std::string> strArray(n);
     for (int i = 0; i < n; i++)
     {
          for(int j = 0; j < 5; j++)
               strArray[i] += randomChar(); 
          std::cout << "Genetared string "<< i << ": "<<strArray[i] << std::endl;
     }
     std::cout << "\nTesting the operator= makes a deep copy:\n" << std::endl;
     Array<std::string> strArrayCpy(n);
     strArrayCpy = strArray;
     std::cout << "original string array address "<< &strArray << std::endl;
     std::cout << "copy string array address"<< &strArrayCpy << std::endl;
     std::cout << "\nTesting with a int array of size n = 5:" << std::endl;
     Array<int> intArray(n);
     for (int i = 0; i < n; i++)
     {
          intArray[i] = randomNum(); 
          std::cout << "Genetared number" << i <<": "<<intArray[i] << std::endl;
     }
     std::cout << "\nTesting the copy constructor makes a deep copy:\n" << std::endl;
     Array<int> intArrayCpy(intArray);
     std::cout << "original int array address "<< &intArray << std::endl;
     std::cout << "copy int array address"<< &intArrayCpy << std::endl;
     std::cout << "\nTesting access with operator[] :\n" << std::endl;
     std::cout << "String in the string array with n = 3 :"<< strArray[3] << std::endl;
     std::cout << "Int in the int array with n = 3 :"<< intArray[3] << std::endl;
     std::cout << "String in the copied string array with n = 3 :"<< strArrayCpy[3] << std::endl;
     std::cout << "Int in the copied int array with n = 3 :"<< intArrayCpy[3] << std::endl; 
}