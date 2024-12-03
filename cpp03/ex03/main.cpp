/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/01 18:38:33 by deniseerjav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap pepe("pepe");
    DiamondTrap lala("lala");

    std::cout << MAGENTA << "Starting battle..." << RESET << std::endl;

    pepe.attack("lala");
    lala.attack("pepe");
    pepe.setAttackDamage(10);
    lala.setAttackDamage(20);

    for (int j = 0; j < 10; j++)
    {
        pepe.attack("lala");
        lala.takeDamage(pepe.getAttackDamage());
        std::cout << BLUE << "lala has " << lala.getHitPoints() << " Hit Points" << RESET << std::endl;
        std::cout << BLUE << "pepe has " << pepe.getEnergyPoints() << " Energy Points" << RESET << std::endl;
    }
    pepe.whoAmI();
    lala.whoAmI();
    
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
