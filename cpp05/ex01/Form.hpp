/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/13 11:40:56 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{ 
    private :
          const std::string _name;
          const int    _gradeSign;
          const int    _gradeExecute;
          bool    _signed;
          Form();
    public:
          Form(std::string name, int gradeSign, int gradeExecute);
          ~Form();
          Form(const Form& obj);
          Form& operator=(const Form& obj);
          void beSigned(Bureaucrat& b);
          void signForm(Bureaucrat& b);
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
          const std::string getName() const;
          int getGradeSign() const;
          int getGradeExecute() const;
};
std::ostream& operator<<(std::ostream& out, const Bureaucrat& Bureaucrat);
#endif