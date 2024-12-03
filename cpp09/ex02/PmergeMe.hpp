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
#include <chrono>
#include <exception>


class PmergeMe
{  
    private :
        std::vector<int> vec;
        std::deque<int> deq;
    public :
          PmergeMe();
          ~PmergeMe();
          PmergeMe(const PmergeMe& other);
          PmergeMe& operator=(const PmergeMe& other);
          int CreateConteiners(int argc, char **argv);
          void fordJohnsonSort(std::vector<int>& data);
          void fordJohnsonSort(std::deque<int>& data);
          std::vector<int>& getVec();
          std::deque<int>& getDeq();
};
void CocktailSort(std::vector<int>& vec);
void    MergeInsert(std::vector<int>& big, std::vector<int>& small);
#endif