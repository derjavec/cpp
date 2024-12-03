/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/20 13:47:38 by deniseerjav      ###   ########.fr       */
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
          class InvalidDate : public std::exception
          {
               private :
                    std::string _date;
                    std::string _message;
               public :
                    InvalidDate(const std::string& date) throw();
                    virtual ~InvalidDate() throw();
                    virtual const char *what() const throw();
          };
          class NegativeN : public std::exception
          {
               public :
                    const char *what() const throw();
          }; 
          class BigN : public std::exception
          {
               public :
                    const char *what() const throw();
          }; 
};

#endif

