/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/10/21 09:46:32 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
     std::cout << "J'adore quand le correcteur ne voit pas mes erreurs et me donne des points gratuits ! C'est comme un rêve devenu réalité.\n" << std::endl;
}
void Harl::info( void )
{
     std::cout << "Je n'arrive pas à croire que le correcteur me signale une erreur juste parce que mon projet compile pas. Franchement, ce n'est pas si grave !\n" << std::endl;
}
void Harl::warning( void)
{
     std::cout << "Si tu continues à laisser la porte des toilettes ouverte quand tu fais pipi, je vais publier la photo sur Slack !\n" << std::endl;
}
void Harl::error( void )
{
     std::cout << "Attends, quoi ? Le correcteur qui m’a volé mon tupperware dans le frigo, c’est le même ! Avec un crime pareil, il mérite l’expulsion immédiate. J'y vais au bocal tout suite\n" << std::endl;
}

void Harl::complain( std::string level )
{
     std::string levels[4];
     int  i;

     levels[0] = "DEBUG";
     levels[1] = "INFO";
     levels[2] = "WARNING";
     levels[3] = "ERROR";

     void ((Harl::*method[])()) = 
     {
          &Harl::debug,
          &Harl::info,
          &Harl::warning,
          &Harl::error
     };
     i = 0;
     while (i < 4)
     {
          if (level == levels[i])
          {
               (this->*method[i])(); 
               return ;               
          }
          i++;
     }
     std::cout << "Invalid level of complaint: " << level << std::endl;
}
     