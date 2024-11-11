/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/11 14:03:14 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137), _target("") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}
ShrubberyCreationForm::~ShrubberyCreationForm(){}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj)
{
     *this = obj;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
     if (this != &obj)
     {
          AForm::operator=(obj);
          _target = obj._target;
     }
     return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
     if (_signed == 1 && executor.getGrade() <= _gradeExecute)
     {
          std::string outfile_name((std::string)_target + "_shrubbery");
          std::ofstream outfile(outfile_name.c_str());
          if (!outfile.is_open())
          std::cerr << "Error while creating outfile" << std::endl;
          outfile << "         ccee88oo\n";
          outfile << "      C8O8O8Q8PoOb o8oo\n";
          outfile << "   dOB69QO8PdUOpugoO9bD\n";
          outfile << "CgggbU8OU qOp qOdoUOdcb\n";
          outfile << "     6OuU  /p u gcoUodpP\n";
          outfile << "        \\\\//  /douUP\n";
          outfile << "          \\\\\\////\n";
          outfile << "           |||/\\\n";
          outfile << "           |||\\/\n";
          outfile << "           |||||\n";
          outfile << "      .....//||||\\....\n";
          outfile.close(); 
     }
     else
          throw  TryExcecute();
}