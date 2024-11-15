/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.tpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/15 18:20:05 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutanStack.hpp"

template <typename T>
MutanStack<T>::MutanStack():std::stack<T> {}
template <typename T>
MutanStack<T>::~MutanStack(){}
template <typename T>
MutanStack<T>::MutanStack(const MutanStack& other): std::stack<T>(other){}
template <typename T>
MutanStack<T>& MutanStack<T>::operator=(MutanStack const &obj)
{
     if (this != &other)
          std::stack<T>::operator=(other);
     return(*this);
}