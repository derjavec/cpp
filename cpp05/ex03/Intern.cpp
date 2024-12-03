/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:03:14 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/13 11:46:40 by derjavec         ###   ########.fr       */
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

const char *Intern::UnknownName::what() const throw()
{
     return ("Form name doesn't exists");
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
          throw UnknownName();
     if (form)
          std::cout << "Intern creates " << name << std::endl;
     return (form);  
}
