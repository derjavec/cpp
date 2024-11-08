/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/08 15:18:29 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():_name("") , _gradeSign(0), _gradeExecute(0), _signed(0){}

Form::Form(std::string name, int gradeSign, int gradeExecute) : _name(name), _gradeSign(gradeSign), _gradeExecute(gradeExecute){}
Form::~Form(){}
Form::Form(const Form& obj): _gradeSign(obj._gradeSign), _gradeExecute(obj._gradeExecute)
{
     *this = obj;
}
Form& Form::operator=(const Form& obj)
{
     if (this != &obj)
     {
          _signed = obj._signed;
     }
     return (*this);
}

const char *Form::GradeTooHighException::what() const throw()
{
     return ("Grade is too high");
}
const char *Form::GradeTooLowException::what() const throw()
{
     return ("Grade is too low");
}

void Form::beSigned(Bureaucrat& b)
{
     if (b.getGrade() <=_gradeSign)
          _signed = 1;
     else
          throw GradeTooLowException();
}
void Form::signForm(Bureaucrat& b)
{
     if (_signed == 1)
          std::cout << b.getName() << " signed " << _name << std::endl;
     else
          std::cout << b.getName() << " couldn't sign " << _name << " because his grade isn't high enough" <<  std::endl;
          
}
const std::string    Form::getName() const
{
     return (_name);
}

std::ostream& operator<<(std::ostream& out, const Form& f)
{
     out << f.getName();
     return (out);
}