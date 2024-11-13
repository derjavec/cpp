/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/13 11:43:25 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm():_name("") , _gradeSign(0), _gradeExecute(0), _signed(0){}
AForm::AForm(std::string name, int gradeSign, int gradeExecute) : _name(name), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
     if (gradeSign > 150 || gradeExecute > 150)
     {
          throw GradeTooLowException();
     }     
     else if (gradeSign < 1 || gradeExecute < 1)
     {
          throw GradeTooHighException();
     }
          
}
AForm::~AForm(){}
AForm::AForm(const AForm& obj): _gradeSign(obj._gradeSign), _gradeExecute(obj._gradeExecute)
{
     *this = obj;
}
AForm& AForm::operator=(const AForm& obj)
{
     if (this != &obj)
     {
          _signed = obj._signed;
     }
     return (*this);
}

const char *AForm::GradeTooHighException::what() const throw()
{
     return ("Grade is too high");
}
const char *AForm::GradeTooLowException::what() const throw()
{
     return ("Grade is too low");
}

const char *AForm::TryExcecute::what() const throw()
{
     return ("Form hasn't been signed or Grade is too low");
}

void AForm::beSigned(Bureaucrat& b)
{
     if (b.getGrade() <= _gradeSign)
          _signed = 1;
     else
          throw GradeTooLowException();
          
}
void AForm::signAForm(Bureaucrat& b)
{
     std::cout << _signed << std::endl;
     if (_signed == 1)
          std::cout << b.getName() << " signed " << _name << std::endl;
     else
          std::cout << b.getName() << " couldn't sign " << _name << " because his grade isn't high enough" <<  std::endl;
          
}
const std::string    AForm::getName() const
{
     return (_name);
}

int   AForm::getGradeSign() const
{
     return (_gradeSign);
}

int   AForm::getGradeExecute() const
{
     return (_gradeExecute);
}

std::ostream& operator<<(std::ostream& out, const AForm& f)
{
     out << f.getName();
     return (out);
}