/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/18 10:24:20 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

char randomChar()
{
     return ('a' + rand() % 26);
}

int main()
{
     std::cout << "Testing subject's main :" << std::endl;
     MutantStack<int> mstack;
     mstack.push(5);
     mstack.push(17);
     std::cout << mstack.top() << std::endl;
     mstack.pop();
     std::cout << mstack.size() << std::endl;
     mstack.push(3);
     mstack.push(5);
     mstack.push(737);
     //[...]
     mstack.push(0);
     MutantStack<int>::iterator it = mstack.begin();
     MutantStack<int>::iterator ite = mstack.end();
     ++it;
     --it;
     while (it != ite)
     {
     std::cout << *it << std::endl;
     ++it;
     }
     std::cout << "----\n" << std::endl;
     std::cout << "Testing subject's main replacing by std::list :" << std::endl;
     std::list<int> mlist;
     mlist.push_back(5);
     mlist.push_back(17);
     std::cout << mlist.back() << std::endl;
     mlist.pop_back();
     std::cout << mlist.size() << std::endl;

     mlist.push_back(3);
     mlist.push_back(5);
     mlist.push_back(737);
     mlist.push_back(0);

     std::list<int>::iterator it_list = mlist.begin();
     std::list<int>::iterator ite_list = mlist.end();
     ++it_list;
     --it_list;

     while (it_list != ite_list) {
          std::cout << *it_list << std::endl;
          ++it_list;
     }

     std::cout << "----\n" << std::endl;
     std::cout << "Testing my own main with strings :" << std::endl;
     srand(time(0)); 
     
     MutantStack<std::string> stringms;
     for (int i = 0; i < 10; i++)
     {
          std::string str;
          for (int j = 0; j < 5; j++)
          {
               str += randomChar();
          }
          std:: cout << "generated string: " << str << std::endl;
          stringms.push(str);
     }
     MutantStack<std::string>::iterator it_str = stringms.begin();
     MutantStack<std::string>::iterator ite_str = stringms.end();
     while (it_str != ite_str)
     {
          std::cout << "iterated stack : " <<*it_str << std::endl;
          it_str++;
     }
     stringms.pop();
     std::cout << "top element after poping once: " <<stringms.top() << std::endl;
     std::cout << "size : "<<stringms.size() << std::endl;
     return 0;
}