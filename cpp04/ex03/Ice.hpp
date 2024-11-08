/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/08 10:48:35 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "Interface.hpp"

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
#endif