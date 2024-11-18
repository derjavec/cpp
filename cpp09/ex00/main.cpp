/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/18 15:02:14 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main (int argc, char *argv[])
{
     if (argc != 2)
     {
          std::cout << "Wrong number of arguments" << std::endl;
          return (1);
     }
     std::string infile = argv[1];
     BitcoinExchange btc;
     try
     {
          btc.loadDataBase("data.csv");
     }
     catch (const std::exception& e)
     {
          std::cerr << e.what() << std::endl;
          return  (1);
     }
     try
     {
          btc.multiplyValues(infile);
     }
     catch (const std::exception& e)
     {
          std::cerr << e.what() << std::endl;
          return  (1);
     }
     return (0);
}