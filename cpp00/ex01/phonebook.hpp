/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:24:31 by deniseerjav       #+#    #+#             */
/*   Updated: 2024/10/16 12:42:45 by deniseerjav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>
# include "contact.hpp"

class Phonebook
{
    private:
        Contact    contacts[8];
        int contactCount;
        int oldestIndex;

    public :
        Phonebook() : contactCount(0), oldestIndex(0) {}
        void addContact();
        void searchContact() const;
};

#endif