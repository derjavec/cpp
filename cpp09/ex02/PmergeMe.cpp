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

PmergeMe::PmergeMe():vec(), deq(){}
PmergeMe::~PmergeMe(){}
PmergeMe::PmergeMe(const PmergeMe& other):vec(other.vec), deq(other.deq){}
PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
    if (this != &other)
    {
        vec = other.vec;
        deq = other.deq;
    }
    return (*this);
}

std::vector<int>& PmergeMe::getVec()
{
    return (vec); 
}

std::deque<int>& PmergeMe::getDeq()
{
    return (deq); 
}

int PmergeMe::CreateConteiners(int argc, char **argv)
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
        vec.push_back(n);
        deq.push_back(n);
        i++;
    }
    return (0);
}

void CocktailSort(std::vector<int>& vec)
{
    size_t i;
    bool sorted = true;

    while (sorted)
    {
        sorted = false;
        i = 0;
        while (i < vec.size() - 1)
        {
            if (vec[i] > vec[i + 1])
            {
                sorted = true;
                std::swap(vec[i], vec[i + 1]);
            }      
            i++;
        }
        i =  vec.size() - 1;
        while (i > 0)
        {
            if (vec[i] < vec[i - 1])
            {
                sorted = true;
                std::swap(vec[i], vec[i - 1]);
            }      
            i--;
        }
    }
}

void    MergeInsert(std::vector<int>& big, std::vector<int>& small)
{
    size_t i;
    
    i = 0;
    while (i < small.size())
    {
        std::vector<int>::iterator pos = std::lower_bound(big.begin(), big.end(), small[i]);
        big.insert(pos, small[i]);
        i++;
    }
}

void PmergeMe::fordJohnsonSort(std::vector<int>& vec)
{
    size_t i;
    std::vector<int> big;
    std::vector<int> small;
    
    i = 0;
    while (i + 1 < vec.size())
    {
        if (vec[i] > vec[i + 1])
        {
            big.push_back(vec[i]);
            small.push_back(vec[i + 1]);
        }
        else
        {
            small.push_back(vec[i]);
            big.push_back(vec[i + 1]);
        }
        i = i + 2;
    }
    if (vec.size() % 2 != 0)
        small.push_back(vec[i]);
    CocktailSort(big); 
    CocktailSort(small);
    MergeInsert(big, small);
    vec = big;
}

void CocktailSort(std::deque<int>& deq)
{
    size_t i;
    bool sorted = true;

    while (sorted)
    {
        sorted = false;
        i = 0;
        while (i < deq.size() - 1)
        {
            if (deq[i] > deq[i + 1])
            {
                sorted = true;
                std::swap(deq[i], deq[i + 1]);
            }      
            i++;
        }
        i =  deq.size() - 1;
        while (i > 0)
        {
            if (deq[i] < deq[i - 1])
            {
                sorted = true;
                std::swap(deq[i], deq[i - 1]);
            }      
            i--;
        }
    }
}

void    MergeInsert(std::deque<int>& big, std::deque<int>& small)
{
    size_t i;
    
    i = 0;
    while (i < small.size())
    {
        std::deque<int>::iterator pos = std::lower_bound(big.begin(), big.end(), small[i]);
        big.insert(pos, small[i]);
        i++;
    }
}

void PmergeMe::fordJohnsonSort(std::deque<int>& deq)
{
    size_t i;
    std::deque<int> big;
    std::deque<int> small;
    
    i = 0;
    while (i + 1 < deq.size())
    {
        if (deq[i] > deq[i + 1])
        {
            big.push_back(deq[i]);
            small.push_back(deq[i + 1]);
        }
        else
        {
            small.push_back(deq[i]);
            big.push_back(deq[i + 1]);
        }
        i = i + 2;
    }
    if (deq.size() % 2 != 0)
        small.push_back(deq[i]);
    CocktailSort(big); 
    CocktailSort(small);
    MergeInsert(big, small);
    deq = big;
}