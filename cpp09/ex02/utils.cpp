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

int lookForIndex(int littleElement, std::vector<std::pair<int,int> > & pairs)
{
    size_t i;

    i = 0;
    while (i < pairs.size())
    {
        if (pairs[i].first == littleElement)
            return (i);
        i++;
    }
    return (-1);
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