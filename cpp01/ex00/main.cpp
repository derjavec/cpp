/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/10/17 17:18:57 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int  main(void)
{
     Zombie    *heap_Zombie;

     heap_Zombie = newZombie("Roberto");
     heap_Zombie->announce();
     delete heap_Zombie;
     randomChump("Pepeloco");
     return (0);
}