/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/11 10:26:49 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main ()
{
     Form forPepe("The form for Pepe", 100, 50);
     Bureaucrat pepe("Pepe", 50);
     try
     {
          forPepe.beSigned(pepe);
     }
     catch(const std::exception& e)
     {
          std::cerr << e.what() << '\n';
     }  
     forPepe.signForm(pepe);
     Form forLala("The form for Lala", 100, 50);
     Bureaucrat lala("Lala", 101);
     try
     {
          forLala.beSigned(lala);
     }
     catch(const std::exception& e)
     {
          std::cerr << e.what() << '\n';
     }
     forLala.signForm(lala);
     return (0);
}
