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
std::vector<T> createGroups(std::vector<std::pair<int,int> > &pairs)
{
    std::vector<T> groups;
    size_t  i;
    int j;
    int     currentSize;
    int     k;
    
    i = 0;
    currentSize = 1;
    k = 2;
    while (i < pairs.size())
    {
        T group;
        j = 0;
        while  (j < currentSize && j + i < pairs.size())
        {
                group.push_back(pairs[j + i].first);
            j++;
        }
        if (!group.empty())
            groups.push_back(group);
        int sign = -1;
        if (k % 2 == 0)
            sign = 1;
        currentSize = (std::pow(2, k + 1) + sign) / 3;
        i += j;
        k++;
    }
    return (groups);
}

template <typename T>
T groupsSortedByIndex(std::vector<T> groups)
{
    size_t i;
    int j;
    T little;
    T group;

    i = 0;
    while (i < groups.size())
    {
        group = groups[i];
        j = group.size() - 1;
        while (j >= 0)
        {
            little.push_back(group[j]);
            j--;
        }
        i++;
    }
    return (little);
}

template <typename T>
int lookForIndexInBig(int bigElement, T& big)
{
    size_t i;

    i = 0;
    while (i < big.size())
    {
        if (big[i] == bigElement)
            return (i);
        i++;
    }
    return (-1);
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

template <typename T>
T getBigestelements(std::vector<std::pair<int,int> > &pairs)
{
    T s;
    size_t i;

    i = 0;
    while (i < pairs.size())
    {
        if (pairs[i].second > -1)
         s.push_back(pairs[i].second);
        i++;
    }
    return (s);
}
