/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:33:31 by deniseerjav       #+#    #+#             */
/*   Updated: 2024/11/12 09:11:33 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

bool isValidPhoneNumber(const std::string &phoneNumber)
{
    int i;
    
     if (phoneNumber.empty())
            std::cout << "Phone Number cannot be empty. Please enter a valid one." << std::endl;
    i = 0;
    while (phoneNumber[i])
    {
        if (!std::isdigit(phoneNumber[i]) && phoneNumber[i] != '+' \
            && phoneNumber[i] != '-' && phoneNumber[i] != ' ')
            {
                std::cout << "Phone Number must only contain digits." << std::endl;
                return (false);
            }        
        i++;
    }
    if (i < 7)
    {
        std::cout << "Phone Number must contain at least 7 digits." << std::endl;
        return (false);
    }     
    return (true);
}

void Phonebook::addContact()
{
    Contact newContact;
    std::string input;
    
    do { std::cout << "Enter First Name: ";
        std::getline(std::cin, input);
        if (input.empty())
            std::cout << "First Name cannot be empty." << std::endl;
        } while (input.empty());
    newContact.setFirstName(input);
    do { std::cout << "Enter Last Name: ";
        std::getline(std::cin, input);
        if (input.empty())
            std::cout << "Last Name cannot be empty." << std::endl;
        } while (input.empty());
    newContact.setLastName(input);
    do { std::cout << "Enter Nick Name: ";
        std::getline(std::cin, input);
        if (input.empty())
            std::cout << "Nick Name cannot be empty." << std::endl;
        } while (input.empty());
    newContact.setNickName(input);
    do { std::cout << "Enter Phone Number: ";
        std::getline(std::cin, input);
        } while (!isValidPhoneNumber(input));
    newContact.setPhoneNumber(input);
    do { std::cout << "Enter Darkest Secret: ";
        std::getline(std::cin, input);
        if (input.empty())
            std::cout << "Darkest Secret cannot be empty." << std::endl;
        } while (input.empty());
    newContact.setDarkestSecret(input);
    if (contactCount < 8)
    {
        contacts[contactCount] = newContact;
        contactCount++;
    }
    else
    {
        contacts[oldestIndex] = newContact;
        oldestIndex = (oldestIndex + 1) % 8;    
    }
    std::cout << "Contact added successfully!" << std::endl;
}

std::string truncate(const std::string &str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    return (str);
}

void    Phonebook::searchContact() const
{
    int i;
    int index;
    std::string input;

    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    i = 0;
    while (i < contactCount)
    {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << truncate(contacts[i].getFirstName()) << "|"
                  << std::setw(10) << truncate(contacts[i].getLastName()) << "|"
                  << std::setw(10) << truncate(contacts[i].getNickName()) << std::endl;
        i++;
    }
    std::cout << "Enter the index of the contact to display: ";
    std::getline(std::cin, input);
    std::stringstream conv(input);
    if (!(conv >> index) || input.length() > 1)
    {
        std::cout << "Invalid index format." << std::endl;
        return ;
    }    
    if (index < 0 || index >= contactCount)
    {
        std::cout << "Index out of range." << std::endl;
        return ;
    }
    std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickName() << std::endl;
    std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
}