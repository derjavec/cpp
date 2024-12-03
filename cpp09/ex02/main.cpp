/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:38 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/26 16:46:11 by deniseerjav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "Wrong amount of arguments" << std::endl;
        return (1);
    }
    
    PmergeMe obj;
    size_t i;
    if (obj.CreateConteiners(argc, argv) != 0)
        return (1);
    std::cout << "Before : ";
    i = 0;
    while (i < obj.getVec().size())
    {
        std::cout << obj.getVec()[i];
        std::cout << " ";
        i++;
    }
    std::cout << std::endl;
    clock_t start_vec = clock();
    obj.fordJohnsonSort(obj.getVec());
    clock_t end_vec = clock();
    std::cout << "After : ";
    i = 0;
    while (i < obj.getVec().size())
    {
        std::cout << obj.getVec()[i];
        std::cout << " ";
        i++;
    }
    std::cout << std::endl;
    std::cout << "Time to process a range of " << obj.getVec().size() << " elements with std::vector : " ;
    double time_vec = static_cast<double>(end_vec - start_vec) / CLOCKS_PER_SEC;
    std::cout << std::fixed << std::setprecision(6) << time_vec << " s" << std::endl;
    clock_t start_deq = clock();
    obj.fordJohnsonSort(obj.getDeq());
    clock_t end_deq = clock();
    std::cout << std::endl;
    std::cout << "Time to process a range of " << obj.getDeq().size() << " elements with std::deque : " ;
    double time_deq = static_cast<double>(end_deq - start_deq) / CLOCKS_PER_SEC;
    std::cout << std::fixed << std::setprecision(6) << time_deq << " s" << std::endl;
}