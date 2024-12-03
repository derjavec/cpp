/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/11 13:37:38 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_HPP
#define SHRUBBERY_HPP

#include <string>
#include <iostream>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{ 
     private :
          std::string _target;
     public:
          ShrubberyCreationForm();
          ShrubberyCreationForm(std::string target);
          ~ShrubberyCreationForm();
          ShrubberyCreationForm(const ShrubberyCreationForm& obj);
          ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
          void execute(Bureaucrat const & executor) const;
};
#endif