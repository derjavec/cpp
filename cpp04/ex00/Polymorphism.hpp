/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorphism.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/04 15:11:58 by deniseerjav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPHISM_HPP
#define POLYMORPHISM_HPP

#include <string>
#include <iostream>

class Animal
{
    protected : 
        std::string type;
    
    public :
        Animal();
        virtual ~Animal();
        Animal(const Animal& obj);
        Animal& operator=(const Animal& obj);
        virtual void makeSound() const;
        std::string getType() const;
};

class Dog : public Animal
{
    public :
        Dog();
        virtual ~Dog();
        Dog(const Dog& obj);
        Dog& operator=(const Dog& obj);
        void makeSound() const;
};

class Cat : public Animal
{
    public :
        Cat();
        virtual ~Cat();
        Cat(const Cat& obj);
        Cat& operator=(const Cat& obj);
        void makeSound() const;
};

class WrongAnimal
{
    protected : 
        std::string type;
    
    public :
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal(const WrongAnimal& obj);
        WrongAnimal& operator=(const WrongAnimal& obj);
        void makeSound() const;
        std::string getType() const;
};

class WrongCat : public WrongAnimal
{
    public :
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat& obj);
        WrongCat& operator=(const WrongCat& obj);
        void makeSound() const;
};
#endif