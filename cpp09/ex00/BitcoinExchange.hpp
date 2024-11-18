/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/18 14:51:05 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE
#define BITCOINEXCHANGE

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iterator>
#include <exception>
#include <map>


class BitcoinExchange
{
     private :
          std::map<std::string, float> data;
     public :
          BitcoinExchange();
          ~BitcoinExchange();
          BitcoinExchange(const BitcoinExchange& other);
          BitcoinExchange& operator=(const BitcoinExchange& other);
          void loadDataBase(const std::string& file);
          void multiplyValues(const std::string& file);
          bool ValidDate(std::string date);
          bool ValidValue(float value);

          class ErrorOpenFile : public std::exception
          {
               public :
                    const char *what() const throw();
          };
          class InvalidData : public std::exception
          {
               public :
                    const char *what() const throw();
          }; 
};

#endif

