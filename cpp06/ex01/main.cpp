/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/12 11:45:27 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main (void)
{
     Data ptr;
     
     ptr.name = "Pepe";
     ptr.id = 42;

     std::cout << "ptr address " << &ptr << std::endl;
     std::cout << "ptr name " << ptr.name << std::endl;
     std::cout << "ptr id " << ptr.id << std::endl;

     uintptr_t a = Serializer::serialize(&ptr);
     std::cout << "decimal address " << a << std::endl;
     Data *newptr = Serializer::deserialize(a);
     std::cout << "newptr address " << newptr << std::endl;
     std::cout << "newptr name " << newptr->name << std::endl;
     std::cout << "newptr id " << newptr->id << std::endl;
     return (0);
}