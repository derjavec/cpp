/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/15 16:45:50 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

int main()
{
     srand(time(0));

    std::cout << "Testing the subject's main\n" << std::endl; 
     Span sp = Span(5);
     sp.addNumber(6);
     sp.addNumber(3);
     sp.addNumber(17);
     sp.addNumber(9);
     sp.addNumber(11);
     std::cout << sp.shortestSpan() << std::endl;
     std::cout << sp.longestSpan() << std::endl;

     std::cout << "\nTesting a very big vector N = 10000\n" << std::endl; 
     try
     {
          unsigned int N = 10000;
          Span Bigsp = Span(N);
          for (unsigned int i = 0; i < N; ++i)
               Bigsp.addNumber(rand() % 100000000);
          std::cout << Bigsp.shortestSpan() << std::endl;
          std::cout << Bigsp.longestSpan() << std::endl;
     }
     catch(const std::exception& e)
     {
          std::cerr << e.what() << '\n';
     }
     
     std::cout << "\nTesting a very little vector N = 1\n" << std::endl; 
     try
     {
          unsigned int N = 1;
          Span Littlesp = Span(N);
          for (unsigned int i = 0; i < N; ++i)
               Littlesp.addNumber(rand() % 10);
          std::cout << Littlesp.shortestSpan() << std::endl;
          std::cout << Littlesp.longestSpan() << std::endl;
     }
     catch(const std::exception& e)
     {
          std::cerr << e.what() << '\n';
     }
     
     std::cout << "\nTest exceeding vector limits\n" << std::endl; 
     try
     {
          unsigned int N = 10;
          Span Anothersp = Span(N);
          for (unsigned int i = 0; i < N + 1; ++i)
               Anothersp.addNumber(rand() % 10);
          std::cout << Anothersp.shortestSpan() << std::endl;
          std::cout << Anothersp.longestSpan() << std::endl;
     }
     catch(const std::exception& e)
     {
          std::cerr << e.what() << '\n';
     }
     return (0);
}