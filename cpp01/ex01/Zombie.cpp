/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/10/18 11:21:04 by deniseerjav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::~Zombie(void)
{
     std::cout << name << " is destroyed" << std::endl;
}

void    Zombie::setName(std::string newName)
{
    name = newName;
}

void    Zombie::announce(void)
{
     std::cout << name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}