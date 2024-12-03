/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/13 11:45:16 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>
#include <fstream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{ 
     private :
          std::string _target;
     public:
          Intern();
          ~Intern();
          Intern(const Intern& obj);
          Intern& operator=(const Intern& obj);
          void execute(Bureaucrat const & executor) const;
          AForm * makeForm(std::string name, std::string target);
          class UnknownName : public std::exception
          {
               public :
                    const char *what() const throw();
          };
};
#endif