/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/18 09:39:00 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack():std::stack<T>() {}
template <typename T>
MutantStack<T>::~MutantStack(){}
template <typename T>
MutantStack<T>::MutantStack(const MutantStack& other): std::stack<T>(other){}
template <typename T>
MutantStack<T>& MutantStack<T>::operator=(MutantStack const &other)
{
     if (this != &other)
          std::stack<T>::operator=(other);
     return(*this);
}
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
     return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
     return (this->c.end());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
     return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
     return (this->c.end());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
     return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
     return (this->c.rend());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const
{
     return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const
{
     return (this->c.rend());
}

