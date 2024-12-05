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
#include <climits>
#include <ctime>
#include <exception>

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
          T fordJohnsonSort(T& data);
          T& getCont();
          void setCont(const T& newConteiner);
};
#include "PmergeMe.tpp"
#endif