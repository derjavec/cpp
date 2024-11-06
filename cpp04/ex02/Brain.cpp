/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/04 15:23:33 by deniseerjav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "The Brain default constructer has been called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "The Brain destructor has been called" << std::endl;
}

Brain::Brain(const Brain& obj)
{
    std::cout << "The Brain copy constructor has been called" << std::endl;
    *this = obj;
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Brain copy assignment operator called" << std::endl;
    if (this != &other) {
        for (int i = 0; i < 100; ++i)
            ideas[i] = other.ideas[i];
    }
    return (*this);
}

void Brain::SetIdea(const std::string idea)
{
    ideas[0] = idea;
}

const std::string Brain::GetIdea()
{
    return ideas[0];
}