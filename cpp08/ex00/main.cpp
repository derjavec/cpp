/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/14 16:28:18 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int randomNum()
{
     return (rand() % 10);
}

int main (void)
{
     srand(time(0));
     int  n = 10;
     std::vector<int> v(n);

     for (int i = 0; i < 10; i++)
     {
          v[i] = randomNum();
          std::cout << "random int generated : "<< v[i] << std::endl;
     }
     try
     {
          int s = randomNum();
          std::cout << "number to find : " << s << std::endl;
          std::vector<int>::iterator res = easyfind(v, s);
          std::cout << "The function easyfind returns : "<< *res << std::endl;
     }
     catch(const std::exception& e)
     {
          std::cerr << e.what() << '\n';
     }
     return (0);  
}