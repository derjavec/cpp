/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/12 14:28:44 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"

int main()
{
     IMateriaSource* src = new MateriaSource();
     src->learnMateria(new Ice());
     src->learnMateria(new Cure());
     ICharacter* me = new Character("me");
     AMateria* tmp;
     tmp = src->createMateria("ice");
     me->equip(tmp);
     tmp = src->createMateria("cure");
     me->equip(tmp);
     tmp = src->createMateria("ice");
     me->equip(tmp);
     tmp = src->createMateria("cure");
     me->equip(tmp);
     tmp = src->createMateria("ice");
     me->equip(tmp);
     tmp = src->createMateria("cure");
     me->equip(tmp);
     ICharacter* bob = new Character("bob");
     me->use(0, *bob);
     me->use(1, *bob);
     delete bob;
     delete me;
     delete src;
     return 0;
}