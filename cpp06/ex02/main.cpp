/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/15 15:34:47 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
     int n = std::rand() % 3;
     Base * base;

     switch (n)
     {
          case 0:
               base = new A();
               std::cout << "Base A created" << std::endl;
               break ;
          case 1:
               base = new B();
               std::cout << "Base B created" << std::endl;
               break ;
          case 2:
               base = new C();
               std::cout << "Base C created" << std::endl;
               break ;
     }
     return (base);
}

void identify(Base *p)
{
     if (dynamic_cast<A *>(p))
          std::cout << "A" << std::endl;
     else if (dynamic_cast<B *>(p))
          std::cout << "B" << std::endl;
     else if (dynamic_cast<C *>(p))
          std::cout << "C" << std::endl;
     else
          std::cout << "Unknown base" << std::endl;

     
}

void identify(Base &p)
{
     try
     {
          A& a = dynamic_cast<A&>(p);
          std::cout << "A" << std::endl;
          (void)a;
          return ;
     }
     catch(const std::exception& e){}
     try
     {
          B& b = dynamic_cast<B&>(p);
          std::cout << "B" << std::endl;
          (void)b;
          return ;
     }
     catch(const std::exception& e){}
     try
     {
          C& c = dynamic_cast<C&>(p);
          std::cout << "C" << std::endl;
          (void)c;
          return ;
     }
     catch(const std::exception& e){}
     std::cout << "Unkown type" << std::endl;    
}

int main (void)
{
     Base *base;

     srand(time(0));
     base = generate();
     std::cout << "executing identify(Base *p) :" << std::endl;
     identify(base);
     std::cout << "executing identify(Base &p) :" << std::endl;
     identify(*base);


     std::cout << " -------" << std::endl;
     base = generate();
     std::cout << "executing identify(Base *p) :" << std::endl;
     identify(base);
     std::cout << "executing identify(Base &p) :" << std::endl;
     identify(*base);


     std::cout << " -------" << std::endl;
     base = generate();
     std::cout << "executing identify(Base *p) :" << std::endl;
     identify(base);
     std::cout << "executing identify(Base &p) :" << std::endl;
     identify(*base);
}