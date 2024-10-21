/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/10/21 10:00:41 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int  main(int argc, char *argv[])
{
     Harl harl;
     std::string    str;
     int  level;

     if (argc != 2)
     {
          std::cerr << "Wrong number of arguments" << std::endl;
          return (1);
     }
     str = argv[1];
     if (str == "DEBUG")
          level = 1;
     else if (str == "INFO")
          level = 2;
     else if (str == "WARNING")
          level = 3;
     else if (str == "ERROR")
          level = 4;
     else
          level = 0;
     switch(level)
     {
          case 1:
               std::cout << "DEBUG level:\n" << std::endl;
               harl.complain("DEBUG");
               level = 2;
          case 2:
               std::cout << "INFO level:\n" << std::endl;
               harl.complain("INFO");
               level = 3;
          case 3:
               std::cout << "WARNING level:\n" << std::endl;
               harl.complain("WARNING");
               level = 3;
          case 4:
               std::cout << "ERROR level:\n" << std::endl;
               harl.complain("ERROR");
               break;
          default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
     }  
     return (0);
}