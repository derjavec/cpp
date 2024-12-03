/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/12 11:23:51 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERT_HPP
#define SCALARCONVERT_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <limits>
#include <cmath>

class ScalarConvert
{ 
     public:
          static void convert(const std::string str);
     private :
          ScalarConvert(void);
          ScalarConvert(ScalarConvert const & copy);
          ~ScalarConvert(void);
          ScalarConvert & operator =(ScalarConvert const & src);
};
#endif