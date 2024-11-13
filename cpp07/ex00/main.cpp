/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/13 12:08:05 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void )
{
     int a = 2;
     int b = 3;
     ::swap( a, b );
     std::cout << "a = " << a << ", b = " << b << std::endl;
     std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
     std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
     std::string c = "chaine1";
     std::string d = "chaine2";
     ::swap(c, d);
     std::cout << "c = " << c << ", d = " << d << std::endl;
     std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
     std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
     return 0;
}