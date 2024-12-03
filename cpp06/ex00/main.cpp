/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/15 15:19:00 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConvert.hpp"

int main (int argc, char **argv)
{

     if (argc != 2)
          std::cout << "Invalid input" << std::endl;
     else
          ScalarConvert::convert(argv[1]);
     return (0);
}