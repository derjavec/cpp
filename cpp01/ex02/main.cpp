/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/10/18 12:06:04 by deniseerjav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
    std::string str;
    std::string *str_ptr;
    std::string &str_ref = str;
    
    str = "HI THIS IS BRAIN";
    str_ptr = &str;
    
    std::cout << "Memory address of the string variable: " << &str << std::endl;
    std::cout << "The memory address held by stringPTR:" << str_ptr << std::endl;
    std::cout << "The memory address held by stringREF:" << &str_ref << std::endl;
    std::cout << "Value of the string variable: " << str << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *str_ptr << std::endl;
    std::cout << "The value pointed to by stringREF: " << str_ref << std::endl;
    return (0);
}