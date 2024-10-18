/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/10/18 15:05:54 by deniseerjav      ###   ########.fr       */
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
          void      setWeapon(Weapon &weapon);
          void  attack() const;
};
#endif