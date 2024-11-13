/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:24:31 by deniseerjav       #+#    #+#             */
/*   Updated: 2024/11/12 09:12:26 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
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