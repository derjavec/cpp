/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/20 13:52:44 by deniseerjav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange():data(){}
BitcoinExchange::~BitcoinExchange(){}
BitcoinExchange::BitcoinExchange(const BitcoinExchange& other): data(other.data){}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
     if (this != &other)
     {
          data = other.data;
     }
     return (*this);
}

const char *BitcoinExchange::ErrorOpenFile::what() const throw()
{
     return ("Error Opening File");
}
const char *BitcoinExchange:: InvalidData::what() const throw()
{
     return ("Invalid format in data input");
}

BitcoinExchange::InvalidDate::InvalidDate(const std::string& date) throw(): _date(date)
{
     _message = "Error: bad input =>" + _date;
}
BitcoinExchange::InvalidDate::~InvalidDate() throw() {}
const char *BitcoinExchange::InvalidDate::what() const throw()
{
    return _message.c_str();
}

const char *BitcoinExchange:: NegativeN::what() const throw()
{
     return ("Error: not a positive number");
}

const char *BitcoinExchange:: BigN::what() const throw()
{
     return ("Error: Value over 1000 dollars");
}

bool BitcoinExchange::ValidDate(std::string date)
{
     if (date.length() != 10)
          return (false);
     if (date[4] != '-' || date[7] != '-')
          return (false);
     for (int i = 0; i < 10; i++)
     {
          if (i == 4 || i == 7)
               i++;
          if (!std::isdigit(date[i]))
               return (false);
     }
     int day;
     int month;
     int year;
     std::stringstream s;
     s.str(date.substr(8, 2));
     s >> day;
     s.clear();
     s.str(date.substr(5, 2));
     s >> month;
     s.clear();
     s.str(date.substr(0, 4));
     s >> year;
     if (day > 31 || month > 12)
          return (false);
     return (true);     
}

bool BitcoinExchange::ValidValue(float value)
{
     if (value < 0 || value > 1000)
          return (false);
     return (true);
}

void BitcoinExchange::loadDataBase(const std::string& file)
{
     std::ifstream infile(file.c_str());
     if (!infile.is_open())
          throw ErrorOpenFile();
     std::string line;
     std::getline(infile, line);
     while (std::getline(infile, line))
     {
          std::istringstream iss(line);
          std::string date;
          float value;
          if (std::getline(iss, date, ',') && iss >> value && ValidDate(date))
          {
             //  std::cout << date << " " << value << std::endl;
               data[date] = value;
          }      
          else
               throw InvalidData();
     }
     // std::map<std::string, float>::iterator it;
     // for (it = data.begin(); it != data.end(); it++)
     // {
     //      std::cout << it->first << "   " << it->second << std::endl;
     // }
     
}

void BitcoinExchange::multiplyValues(const std::string& file)
{
     std::ifstream infile(file.c_str());
     if (!infile.is_open())
          throw ErrorOpenFile();
     std::string line;
     std::getline(infile, line);
     while (std::getline(infile, line))
     {
          //std::cout << line << std::endl;
          try
          {
               std::istringstream iss(line);
               std::string date;
               float value;
               if (std::getline(iss, date, '|') && iss >> value)
               {
                    date.erase(0, date.find_first_not_of(" \t"));
                    date.erase(date.find_last_not_of(" \t") + 1);
                    if (ValidDate(date) && ValidValue(value))
                    {
                         std::map<std::string, float>::iterator it = data.lower_bound(date);
                         
                         float price = it->second;
                         std::cout << it->first << "=>" << value << " = " << (price * value) << std::endl;
                    }
                    else
                    {
                         if (!ValidDate(date))
                              throw InvalidDate(date);
                         else if (value < 0)
                              throw NegativeN();
                         else if (value > 1000)
                              throw BigN();
                         else
                              throw InvalidData();
                    }      
               }      
               else
                    throw InvalidDate(date);
          }
          catch (const std::exception& e)
          {
               std::cerr << e.what() << std::endl;
          }
          
     }
}