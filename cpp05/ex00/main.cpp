/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/13 11:38:56 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
     try
     {
          Bureaucrat pepe("Pepe", 1);
          std::cout << pepe.getName()<< "'s grade is " << pepe << std::endl;
          try
          {
               std::cout << "trying to increment " << pepe.getName() << "'s grade..." << std::endl;
               pepe.IncrementGrade();
          }
          catch (const std::exception& e)
          {
               std::cerr << e.what() << std::endl;
          }
          
          std::cout << pepe.getName()<< "'s grade is " << pepe << std::endl;
          try
          {
               std::cout << "trying to increment " << pepe.getName() << "'s grade..." << std::endl;
               pepe.IncrementGrade();
          }
          catch (const std::exception& e)
          {
               std::cerr << e.what() << std::endl;
          }
     }
     catch (const std::exception& e)
          {
               std::cerr << e.what() << std::endl;
          }
     
     try
     {
         Bureaucrat lala("Lala", 149);
          std::cout << lala.getName()<< "'s grade is " << lala << std::endl;
          try
          {  
               std::cout << "trying to decrease " << lala.getName() << "'s grade..." << std::endl; 
               lala.DecreaseGrade();
          }
          catch (const std::exception& e)
          {
               std::cerr << e.what() << std::endl;
          }
          std::cout << lala.getName()<< "'s grade is " << lala << std::endl;
          try
          {   
               std::cout << "trying to decrease " << lala.getName() << "'s grade..." << std::endl;   
               lala.DecreaseGrade();
          }
          catch (const std::exception& e)
          {
               std::cerr << e.what() << std::endl;
          }
     }    
     catch (const std::exception& e)
     {
          std::cerr << e.what() << std::endl;
     }  
     return (0);
}
