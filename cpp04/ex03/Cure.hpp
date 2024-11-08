/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/08 09:50:41 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "Interface.hpp"

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

#endif