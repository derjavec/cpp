/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/20 12:55:09 by deniseerjav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main (int argc, char *argv[])
{
     if (argc != 2)
     {
          std::cout << "Error: could not open file." << std::endl;
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
     btc.multiplyValues(infile);

     return (0);
}