/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/10/25 10:16:36 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void )
{
     Fixed a;
     Fixed b( a );
     Fixed c;
     
     c = b;
     std::cout << a.getRawBits() << std::endl;
     std::cout << b.getRawBits() << std::endl;
     std::cout << c.getRawBits() << std::endl;
     return 0;
}