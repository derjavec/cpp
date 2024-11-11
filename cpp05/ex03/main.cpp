/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/11 15:40:05 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main ()
{
     try
     {
          Intern intern;
          Bureaucrat president("Zaphod Beeblebrox", 1);
          Bureaucrat bestEmployee("El Chavo", 30);
          AForm* shrubForm = intern.makeForm("ShrubberyCreationForm", "Home");
          if (shrubForm)
          {
               shrubForm->beSigned(bestEmployee);
               bestEmployee.executeForm(*shrubForm);
               delete shrubForm;
          }
          AForm* robotForm = intern.makeForm("RobotomyRequestForm", "Office");
          if (robotForm)
          {
               robotForm->beSigned(bestEmployee);
               bestEmployee.executeForm(*robotForm);
               delete robotForm;
          }
          AForm* pardonForm = intern.makeForm("PresidentialPardonForm", "Kiko");
          if (pardonForm)
          {
               pardonForm->beSigned(president);
               president.executeForm(*pardonForm);
               delete pardonForm;
          }
          AForm* unknownForm = intern.makeForm("unknown form", "Nobody");
          if (!unknownForm)
               std::cout << "Unknown form could not be created." << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

     return (0);
}
