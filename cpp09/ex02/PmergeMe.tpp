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

template <typename T>
std::vector<T> createGroups(std::vector<std::pair<int,int> > &pairs)
{
    std::vector<T> groups;
    size_t  i;
    int j;
    int  p;
    int     currentSize;
    int     nextSize;
    
    i = 0;
    currentSize = 2;
    nextSize = 2;
    p = 1;
    while (i < pairs.size())
    {
        T group;
        j = 0;
        std::cout <<"current Size: " <<currentSize << std::endl;
        while  (j < currentSize)
        {
            group.push_back(pairs[j + i].first);
            j++;
        }
        std::cout <<"j: " <<j<< std::endl;
        groups.push_back(group);
        std::cout <<"next Size 1: " <<nextSize << std::endl;
        nextSize = currentSize + nextSize;
        std::cout <<"next Size 2: " <<nextSize << std::endl;
        currentSize = nextSize - currentSize;
        i += j;
        p++;
    }
    return (groups);
}

template <typename T>
T groupsSortedByIndex(std::vector<T> groups)
{
    size_t i;
    int j;
    T group;
    T little;

    i = 0;
    while (i < groups.size())
    {
        group = groups[i];
        j = group.size();
        while (j > 0)
        {
            little.push_back(group[j]);
            j--;
        }
        i++;
    }
    return (little);
}

template <typename T>
void    MergeInsert(T& s, std::vector<std::pair<int,int> > &pairs)
{
    std::vector<T> groups;
    T little;

    (void)s;
    groups = createGroups<T>(pairs);
    for (size_t i = 0; i < groups.size(); i++)
    {
        T group = groups[i];
        std::cout << "size: "<< group.size()<<std::endl;
        for (size_t j = 0; j < group.size(); j++)
        {
            std::cout << group[j]<< std::endl;;
        }
        std::cout << " "<<std::endl;
    }
    little = groupsSortedByIndex<T>(groups);

}

template <typename T>
std::vector<std::pair<int,int> > createPairs(T& cont)
{
    size_t i;
    std::vector<std::pair<int,int> > pairs;

    i = 0;
    while (i + 1 < cont.size())
    {
        pairs.push_back(std::pair<int, int>(cont[i], cont[i + 1]));
        i = i + 2;
    }
    if (i < cont.size())
    {
        pairs.push_back(std::pair<int, int>(cont[i], INT_MIN));
    }
    return (pairs);
}

void sortPairs(std::vector<std::pair<int,int> > &pairs)
{
    size_t i;

    i = 0;
    while (i < pairs.size())
    {
        if (pairs[i].first > pairs[i].second)
            std::swap(pairs[i].first, pairs[i].second);
        i++;
    }
}
template <typename T>
T getBigestelements(std::vector<std::pair<int,int> > &pairs)
{
    T s;
    size_t i;

    i = 0;
    while (i < pairs.size())
    {
        s.push_back(pairs[i].second);
        i++;
    }
    return (s);
}

template <typename T>
T PmergeMe<T>::fordJohnsonSort(T& cont)
{

    std::vector<std::pair<int,int> > pairs;
    T s;

    if (cont.size() <= 1)
        return (cont);
    pairs = createPairs(cont);
    // for (size_t  i = 0; i < pairs.size(); i++)
    // {
    //     std::cout << pairs[i].first << " " << pairs[i].second << std::endl;
    // }
    // std::cout << "sorted" << std::endl;
    sortPairs(pairs);
    // for (size_t  i = 0; i < pairs.size(); i++)
    // {
    //     std::cout << pairs[i].first << " " << pairs[i].second << std::endl;
    // }
    s = getBigestelements<T>(pairs);
    //std::cout << "recurs fin" << std::endl;
    T sortedS = fordJohnsonSort(s);
    // std::cout << "sorted s" << std::endl;
    // for (size_t  i = 0; i < sortedS.size(); i++)
    // {
    //     std::cout << sortedS[i]  << std::endl;
    // }
    MergeInsert<T>(sortedS, pairs); 
    return (sortedS);
}
