/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:03:14 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/11 15:41:19 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}
Intern::~Intern(){}
Intern::Intern(const Intern& obj)
{
     *this = obj;
}
Intern& Intern::operator=(const Intern& obj)
{
     (void)obj;
     return (*this);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
     AForm *form = NULL;
     
     if (name == "ShrubberyCreationForm")
          form = new ShrubberyCreationForm(target);
     else if (name == "RobotomyRequestForm")
          form = new RobotomyRequestForm(target);
     else if (name == "PresidentialPardonForm")
          form = new PresidentialPardonForm(target);
     else
          std::cout << "Form name doesn't exists" << std::endl;
     if (form)
          std::cout << "Intern creates " << name << std::endl;
     return (form);  
}
