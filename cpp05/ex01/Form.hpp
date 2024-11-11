/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/11 10:22:03 by derjavec         ###   ########.fr       */
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
    public:
          Form();
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
};
std::ostream& operator<<(std::ostream& out, const Bureaucrat& Bureaucrat);
#endif