/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/18 10:20:22 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <string>
#include <iostream>
#include <stack>
#include <list>
#include <deque>
#include <iterator>
#include <cstdlib>
#include <ctime>

template <typename T>
class MutantStack : public std::stack<T>
{
     public:
          MutantStack();
          ~MutantStack();
          MutantStack(const MutantStack& other);
          MutantStack& operator=(MutantStack const &other);

          typedef typename std::deque<T>::iterator iterator;
          typedef typename std::deque<T>::const_iterator const_iterator;
          typedef typename std::deque<T>::reverse_iterator reverse_iterator;
          typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;

          iterator begin();
          iterator end();
          const_iterator begin() const;
          const_iterator end() const;
          reverse_iterator rbegin();
          reverse_iterator rend();
          const_reverse_iterator rbegin() const;
          const_reverse_iterator rend() const;         
};
#include "MutantStack.tpp"
#endif