/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/10/18 11:38:38 by deniseerjav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int  main(void)
{
    Zombie    *horde;
    int        N;
    int        i;

    N = 5;
    horde = zombieHorde(N, "Pepe");
    i = 0;
    while (i < N)
    {
        horde[i].announce();
        i++;
    }
   
    delete[] horde; 
    return (0);
}