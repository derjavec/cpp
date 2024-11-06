/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/04 15:32:32 by deniseerjav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorphism.hpp"

int main()
{
    int     q;
    int     i;
    
    q = 10;
    i = 0;
    Animal  *animal[q];
    for (i = 0; i < q/2 ; i++)
        animal[i] = new Dog();
    for (i = q/2; i < q ; i++)
        animal[i] = new Cat();
    for (i = 0; i < q ; i++)
    {
        std::cout << "Animal [" << i << "] type: " << animal[i]->getType() << std::endl;
        animal[i]->makeSound();
    }
    for (int i = 0; i < q; ++i)
        delete animal[i];

    std::cout << "\n\n\n"  << std::endl;
    Dog original;
    Dog copied;

    original.GetBrain()->SetIdea("eat homework");
    copied = original;
    std::cout << "Original's first idea: " << original.GetBrain()->GetIdea() << std::endl;
    std::cout << "Copied's first idea: " << copied.GetBrain()->GetIdea() << std::endl;    std::cout << "Copied's first idea: " << copied.GetBrain()->GetIdea() << std::endl;
    original.GetBrain()->SetIdea("pee inside the house");
    std::cout << "Original's first idea: " << original.GetBrain()->GetIdea() << std::endl;
    std::cout << "Copied's first idea: " << copied.GetBrain()->GetIdea() << std::endl;


    return 0;
}