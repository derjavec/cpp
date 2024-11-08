/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/08 12:15:58 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat
{ 
    private :
        const std::string _name;
        int    _grade;
    public:
        Bureaucrat();
        Bureaucrat(std:: string name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& obj);
        Bureaucrat& operator=(const Bureaucrat& obj);
        
        const std::string getName() const;
        int    getGrade() const;
        void   IncrementGrade();
        void   DecreaseGrade();
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
};
std::ostream& operator<<(std::ostream& out, const Bureaucrat& Bureaucrat);
#endif