/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/10/17 17:23:56 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string new_name) : name(new_name){}

Zombie::~Zombie(void)
{
     std::cout << name << " is destroyed" << std::endl;
}

void Zombie::announce(void)
{
     std::cout << name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}
