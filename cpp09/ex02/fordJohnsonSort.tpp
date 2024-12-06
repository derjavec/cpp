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
void    dichotomy(T& big, T& little, std::vector<std::pair<int,int> > &pairs)
{
    size_t i = 0;
    int index;

    while  (i < little.size())
    {
        index = lookForIndex(little[i], pairs);
        if (index == -1)
            index = big.size() - 1;
        index = lookForIndexInBig(pairs[index].second, big);
        if (big.empty() && little[i] > 0)
            big.push_back(little[i]);
        else
        {
            int low = 0;
            int high = std::min(static_cast<int>(big.size()), index + 1);
            while (low < high)
            {
                int mid = low + (high - low) / 2;
                if (little[i] <= big[mid])
                    high = mid;
                else
                    low = mid + 1;
            }
            if (little[i] > 0)
            big.insert(big.begin() + low, little[i]);
        }  
        i++;
    }   
}

template <typename T>
void    MergeInsert(T& big, std::vector<std::pair<int,int> > &pairs)
{
    std::vector<T> groups;
    T little;

    groups = createGroups<T>(pairs);
    for (size_t i = 0; i < groups.size(); i++)
    {
        T group = groups[i];
    //    std::cout << "size: "<< group.size()<<std::endl;
    //     for (size_t j = 0; j < group.size(); j++)
    //     {
    //         std::cout << group[j]<< std::endl;;
    //     }
    //     std::cout << " "<<std::endl;
    }
    little = groupsSortedByIndex<T>(groups);
    // std::cout << "little" << std::endl;
    // for (size_t j = 0; j < little.size(); j++)
    // {
    //     std::cout << little[j]<< std::endl;;
    // }
    //std::cout << std::endl;
    dichotomy(big, little, pairs);
    // std::cout << "after dichotomy big" << std::endl;
    // for (size_t j = 0; j < big.size(); j++)
    // {
    //     std::cout << big[j]<< std::endl;;
    // }
    // std::cout << " "<<std::endl;
}

template <typename T>
T PmergeMe<T>::fordJohnsonSort(T& cont, bool topLevel)
{
    (void)topLevel;
    std::vector<std::pair<int,int> > pairs;
    T big;
    if (cont.size() <= 1)
        return (cont);
    pairs = createPairs(cont);
    // for (size_t  i = 0; i < pairs.size(); i++)
    // {
    //     std::cout << pairs[i].first << " " << pairs[i].second << std::endl;
    // }
    //std::cout << "sorted" << std::endl;
    sortPairs(pairs);
    // for (size_t  i = 0; i < pairs.size(); i++)
    // {
    //     std::cout << pairs[i].first << " " << pairs[i].second << std::endl;
    // }
    // std::cout<<std::endl;
    big = getBigestelements<T>(pairs);
    // std::cout << "big" << std::endl;
    // for (size_t  i = 0; i < big.size(); i++)
    // {
    //     std::cout << big[i]  << std::endl;
    // }
    T sortedBig = fordJohnsonSort(big, false);
    MergeInsert<T>(sortedBig, pairs); 
    return (sortedBig);
}