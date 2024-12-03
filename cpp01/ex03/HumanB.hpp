/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/06 09:02:41 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"
// #include <string>
// #include <iostream>

class HumanB
{
     private :
          std::string name;
          Weapon    *weapon;
          
     public :    
          HumanB(std::string name);
          ~HumanB();
          void      setWeapon(Weapon &weapon);
          void  attack() const;
};
#endif