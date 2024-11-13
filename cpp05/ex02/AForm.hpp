/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/13 11:41:41 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{ 
    protected :
          const std::string _name;
          const int    _gradeSign;
          const int    _gradeExecute;
          bool    _signed;
          AForm();
    public:
          AForm(std::string name, int gradeSign, int gradeExecute);
          virtual ~AForm();
          AForm(const AForm& obj);
          AForm& operator=(const AForm& obj);
          void beSigned(Bureaucrat& b);
          void signAForm(Bureaucrat& b);
          class GradeTooHighException : public std::exception
          {
               public :
                    const char *what() const throw();
          };
               
          class GradeTooLowException : public std::exception
          {
               public :
                    const char *what() const throw();
          };
          
          class TryExcecute : public std::exception
          {
               public :
                    const char *what() const throw();
          };
          const std::string getName() const;
          int getGradeSign() const;
          int getGradeExecute() const;
          virtual void execute(Bureaucrat const & executor) const = 0;
};
std::ostream& operator<<(std::ostream& out, const Bureaucrat& Bureaucrat);
#endif