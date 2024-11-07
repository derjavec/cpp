/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Interface.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/07 17:38:43 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERFACE_HPP
#define INTERFACE_HPP

#include <string>
#include <iostream>

class ICharacter;

class AMateria
{
    protected :
        std::string type;
    public : 
        AMateria();
        virtual ~AMateria();
        AMateria(const AMateria& obj);
        AMateria& operator=(const AMateria& obj);
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

class Ice : public AMateria
{  
    public :
        Ice();
        ~Ice();
        Ice(const Ice& obj);
        Ice& operator=(const Ice& obj);
        Ice* clone() const;
        void use(ICharacter& target);
};

class Cure : public AMateria
{ 
    public : 
        Cure();
        ~Cure();
        Cure(const Cure& obj);
        Cure& operator=(const Cure& obj);
        Cure* clone() const;
        void use(ICharacter& target);
};

class ICharacter
{
    public:
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter
{
    private :
        std::string name;
        AMateria *mat[4];
    public:
        Character();
        ~Character();
        Character(std::string name);
        Character(const Character& obj);
        Character& operator=(const Character& obj);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource
{
    private :
        AMateria *mat[4];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource& obj);
        MateriaSource& operator=(const MateriaSource& obj);
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
};

#endif