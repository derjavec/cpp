/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/24 17:34:49 by deniseerjav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME
#define PMERGEME

#include <vector>
#include <deque>
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <ctime>
#include <exception>
#include "utils.hpp"

template <typename T>
class PmergeMe
{  
    private :
        T conteiner;
    public :
          PmergeMe();
          ~PmergeMe();
          PmergeMe(const PmergeMe& other);
          PmergeMe& operator=(const PmergeMe& other);
          int CreateConteiners(int argc, char **argv);
          T fordJohnsonSort(T& data, bool topLevel);
          T& getCont();
          void setCont(const T& newConteiner);
};
template <typename T>
std::vector<T> createGroups(std::vector<std::pair<int,int> > &pairs);
template <typename T>
T groupsSortedByIndex(std::vector<T> groups);
template <typename T>
int lookForIndexInBig(int bigElement, T& big);
template <typename T>
std::vector<std::pair<int,int> > createPairs(T& cont);
template <typename T>
T getBigestelements(std::vector<std::pair<int,int> > &pairs);

#include "PmergeMe.tpp"
#include "utils.tpp"
#include "fordJohnsonSort.tpp"

#endif