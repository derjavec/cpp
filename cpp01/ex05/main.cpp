/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/10/21 09:32:13 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int  main(void)
{
     Harl harl;

     std::cout << "DEBUG level:\n" << std::endl;
     harl.complain("DEBUG");
     std::cout << "INFO level:\n" << std::endl;
     harl.complain("INFO");
     std::cout << "WARNING level:\n" << std::endl;
     harl.complain("WARNING");
     std::cout << "ERROR level:\n" << std::endl;
     harl.complain("ERROR");
     return (0);
}