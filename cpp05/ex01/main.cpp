/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/08 15:21:49 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main ()
{
     Form info("Info", 100, 50);
     Bureaucrat pepe("Pepe", 100);
     try
     {
          info.beSigned(pepe);
     }
     catch(const std::exception& e)
     {
          std::cerr << e.what() << '\n';
     }  
     info.signForm(pepe);
     Bureaucrat lala("Lala", 101);
     try
     {
          info.beSigned(lala);
     }
     catch(const std::exception& e)
     {
          std::cerr << e.what() << '\n';
     }
     info.signForm(lala);
     return (0);
}
