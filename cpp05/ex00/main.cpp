/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/08 12:24:11 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
     Bureaucrat pepe("Pepe", 2);
     std::cout << pepe.getName()<< "'s grade is " << pepe << std::endl;
     try
     {
          std::cout << "trying to increment " << pepe.getName() << "'s grade..." << std::endl;
          pepe.IncrementGrade();
     }
     catch (const Bureaucrat::GradeTooHighException& e)
     {
          std::cerr << e.what() << std::endl;
     }
     catch (const Bureaucrat::GradeTooLowException& e)
     {
        std::cerr << e.what() << std::endl;
     }
     std::cout << pepe.getName()<< "'s grade is " << pepe << std::endl;
     try
     {
          std::cout << "trying to increment " << pepe.getName() << "'s grade..." << std::endl;
          pepe.IncrementGrade();
     }
     catch (const Bureaucrat::GradeTooHighException& e)
     {
          std::cerr << e.what() << std::endl;
     }
     catch (const Bureaucrat::GradeTooLowException& e)
     {
        std::cerr << e.what() << std::endl;
     }
     
     Bureaucrat lala("Lala", 149);
     std::cout << lala.getName()<< "'s grade is " << lala << std::endl;
     try
     {  
          std::cout << "trying to decrease " << lala.getName() << "'s grade..." << std::endl; 
          lala.DecreaseGrade();
     }
     catch (const Bureaucrat::GradeTooHighException& e)
     {
          std::cerr << e.what() << std::endl;
     }
     catch (const Bureaucrat::GradeTooLowException& e)
     {
          std::cerr << e.what() << std::endl;
     }
     std::cout << lala.getName()<< "'s grade is " << lala << std::endl;
     try
     {   
          std::cout << "trying to decrease " << lala.getName() << "'s grade..." << std::endl;   
          lala.DecreaseGrade();
     }
     catch (const Bureaucrat::GradeTooHighException& e)
     {
          std::cerr << e.what() << std::endl;
     }
     catch (const Bureaucrat::GradeTooLowException& e)
     {
          std::cerr << e.what() << std::endl;
     }
     return (0);
}
