/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/13 09:31:08 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name("") , _grade(0){}
Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
     if (grade > 0 && grade < 151)
          _grade = grade;
     else if (grade > 150)
          throw GradeTooLowException();
     else
          throw GradeTooHighException();
}
Bureaucrat::~Bureaucrat(){}
Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
     *this = obj;
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
     if (this != &obj)
     {
          _grade = obj._grade;
     }
     return (*this);
}

const std::string Bureaucrat::getName() const
{
     return (_name);
}

int  Bureaucrat::getGrade() const
{
     return (_grade);
}
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
     return ("Grade is too high");
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
     return ("Grade is too low");
}

void Bureaucrat::IncrementGrade()
{
     if (_grade > 1)
          _grade--;
     else
          throw GradeTooHighException();
}

void Bureaucrat::DecreaseGrade()
{
     if (_grade < 150)
          _grade++;
     else
          throw GradeTooLowException();
}


std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat)
{
    out << bureaucrat.getGrade();
    return (out);
}