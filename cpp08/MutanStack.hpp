/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/15 18:18:51 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP

#include <string>
#include <iostream>
#include <stack>
#include <deque>
#include <iterator>

template <typename T>
class MutanStack : public std::stack<T>
{
     public:
          MutanStack();
          ~MutanStack();
          MutanStack(const MutanStack& other);
          MutanStack& operator=(MutanStack const &other);

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
#include "MutanStack.tpp"
#endif