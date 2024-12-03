/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/13 11:39:48 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main ()
{
     ShrubberyCreationForm ShruForm("Home");
     RobotomyRequestForm RobForm("Office");
     try
     {
          Bureaucrat president ("Zaphod Beeblebrox", 1);
          try
          {
               Bureaucrat BestEmployee ("El Chavo", 30);
               try
               {
                    Bureaucrat WorstEmployee ("Kiko", 145);
                    std::cout << "\033[1;34mThe President tries to execute the Shrubbery form:\033[0m" << std::endl;     std::cout << "\033[1;34mHe noticed " << WorstEmployee.getName() << " forgot to sign it, He is so angry that he decreases his grade\033[0m" << std::endl;
                    WorstEmployee.DecreaseGrade();
                    std::cout << "\033[1;34mHe shouts at him, so the employee runs to his computer to sign it.\033[0m" << std::endl;     
                    try
                    {
                         ShruForm.beSigned(WorstEmployee);
                    }
                    catch(const std::exception& e)
                    {
                         std::cerr << e.what() << '\n';
                    }  
                    std::cout << "\033[1;34mUnfortunately, his current grade is no longer enough to sign it.\033[0m" << std::endl;
                    std::cout << "\033[1;34mSo the best employee helps and signs it for him.\033[0m" << std::endl;
                    try
                    {
                         ShruForm.beSigned(BestEmployee);
                    }
                    catch(const std::exception& e)
                    {
                         std::cerr << e.what() << '\n';
                    }  
                    std::cout << "\033[1;34mAnd he also executes it.\033[0m" << std::endl;
                    BestEmployee.executeForm(ShruForm);
                    std::cout << "\033[1;34mAfter seeing this beautiful tree, the President decides to forgive the worst employee and increases his grade.\033[0m" << std::endl;     PresidentialPardonForm PresiForm(WorstEmployee.getName());
                    try
                    {
                         PresiForm.beSigned(president);
                    }
                    catch(const std::exception& e)
                    {
                         std::cerr << e.what() << '\n';
                    }  
                    president.executeForm(PresiForm);
                    std::cout << "\033[1;34m" << WorstEmployee.getName() << " is grateful for the President's forgiveness.\033[0m" << std::endl;
                    WorstEmployee.IncrementGrade();
                    std::cout << "\033[1;34m" << BestEmployee.getName() << " is proud of his good actions, so he works very hard and signs the form that makes the noise his wife loves so much.\033[0m" << std::endl;     
                    try
                    {
                         RobForm.beSigned(BestEmployee);
                    }
                    catch(const std::exception& e)
                    {
                         std::cerr << e.what() << '\n';
                    } 
                    BestEmployee.executeForm(RobForm);
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
     }
     catch (const std::exception& e)
     {
          std::cerr << e.what() << std::endl;
     } 
     return (0);
}
