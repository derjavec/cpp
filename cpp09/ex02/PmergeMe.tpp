/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/24 17:35:17 by deniseerjav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename T>
PmergeMe<T>::PmergeMe():conteiner(){}
template <typename T>
PmergeMe<T>::~PmergeMe(){}
template <typename T>
PmergeMe<T>::PmergeMe(const PmergeMe& other):conteiner(other.conteiner){}
template <typename T>
PmergeMe<T>& PmergeMe<T>::operator=(const PmergeMe& other)
{
    if (this != &other)
    {
        conteiner = other.conteiner;
    }
    return (*this);
}
template <typename T>
T& PmergeMe<T>::getCont()
{
    return (conteiner); 
}
template <typename T>
void PmergeMe<T>::setCont(const T& newConteiner)
{
    conteiner = newConteiner;
}
template <typename T>
int PmergeMe<T>::CreateConteiners(int argc, char **argv)
{
    int i;
    int n;
    char c;

    i = 1;
    while (i < argc)
    {
        std::string arg = argv[i];
        if (arg.empty())
        {
            std::cout << "Empty element found" << std::endl;
            return (1);
        }
        std::stringstream conv(arg);
        if (!(conv >> n) || (conv >> c))
        {
            std::cout << "Invalid input format." << std::endl;
            return (1);
        }    
        if (n < 0)
        {
            std::cout << "Negative number in the array" << std::endl;
            return (1);
        }
        conteiner.push_back(n);
        i++;
    }
    return (0);
}


