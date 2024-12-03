/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/10/31 22:27:03 by deniseerjav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap pepe("pepe");
    ClapTrap lala("lala");

    std::cout << MAGENTA << "Starting battle..." << RESET << std::endl;

    pepe.attack("lala");
    lala.attack("pepe");
    pepe.setAttackDamage(1);
    lala.setAttackDamage(2);

    for (int j = 0; j < 10; j++)
    {
        pepe.attack("lala");
        lala.takeDamage(pepe.getAttackDamage());
        std::cout << BLUE << "lala has " << lala.getHitPoints() << " Hit Points" << RESET << std::endl;
        std::cout << BLUE << "pepe has " << pepe.getEnergyPoints() << " Energy Points" << RESET << std::endl;
    }

    std::cout << MAGENTA << "Status after attacks:" << RESET << std::endl;
    std::cout << BLUE << "pepe has " << pepe.getHitPoints() << " Hit Points" << RESET << std::endl;
    std::cout << BLUE << "pepe has " << pepe.getEnergyPoints() << " Energy Points" << RESET << std::endl;
    std::cout << BLUE << "lala has " << lala.getHitPoints() << " Hit Points" << RESET << std::endl;
    std::cout << BLUE << "lala has " << lala.getEnergyPoints() << " Energy Points" << RESET << std::endl;

    pepe.beRepaired(10);
    lala.beRepaired(10);

    std::cout << GREEN << "Status after repair:" << RESET << std::endl;
    std::cout << BLUE << "pepe has " << pepe.getHitPoints() << " Hit Points" << RESET << std::endl;
    std::cout << BLUE << "pepe has " << pepe.getEnergyPoints() << " Energy Points" << RESET << std::endl;
    std::cout << BLUE << "lala has " << lala.getHitPoints() << " Hit Points" << RESET << std::endl;
    std::cout << BLUE << "lala has " << lala.getEnergyPoints() << " Energy Points" << RESET << std::endl;

    std::cout << MAGENTA << "Battle ended." << RESET << std::endl;
    return 0;
}
