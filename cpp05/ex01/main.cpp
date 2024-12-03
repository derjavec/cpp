/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/13 11:39:15 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main ()
{
     try
     {
          Form forPepe("The form for Pepe", 100, 50);
          Bureaucrat pepe("Pepe", 50);
          try
          {
               forPepe.beSigned(pepe);
          }
          catch(const std::exception& e)
          {
               std::cerr << e.what() << '\n';
          }  
          forPepe.signForm(pepe);
     }
     catch (const std::exception& e)
     {
          std::cerr << e.what() << std::endl;
     }
     try
     {
          Form forLala("The form for Lala", 100, 50);
          Bureaucrat lala("Lala", 101);
          try
          {
               forLala.beSigned(lala);
          }
          catch(const std::exception& e)
          {
               std::cerr << e.what() << '\n';
          }
          forLala.signForm(lala);
     }
     catch (const std::exception& e)
     {
          std::cerr << e.what() << std::endl;
     }
     return (0);
}
