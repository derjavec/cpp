/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/10/09 10:09:28 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
     int  i;
     int  j;
     
     if (argc == 1)
          std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
     else
     {
          i = 1;
          while (i < argc)
          {
               j = 0;
               while (argv[i][j])
               {
                    std::cout << static_cast<char>(std::toupper(argv[i][j]));
                    j++;
               }
               if (i < argc - 1)
                 std::cout << " ";
               i++;
          }
          std::cout << std::endl;       
     }
}