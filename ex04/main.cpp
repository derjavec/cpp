/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/10/18 16:34:39 by deniseerjav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char *argv[])
{
    std::string filename;
    std::string s1;
    std::string s2;
    std::string line;
    std::string mod_line;

    if (argc != 4)
    {
        std::cerr << "Wrong number of arguments" << std::endl;
        return (1);
    }
    filename = argv[1];
    s1 = argv[2];
    s2 = argv[3];
    if (s1.empty())
    {
        std::cerr << "First string can't be empty" << std::endl;
        return (1);
    }
    std::ifstream infile(filename);
    if (!infile.is_open())
    {
        std::cerr << "Error while opening infile" << std::endl;
        return (1);
    }
    std::ofstream outfile(filename + ".replace");
    if (!outfile.is_open())
    {
        std::cerr << "Error while creating outfile" << std::endl;
        return (1);
    }
    while(std::getline(infile, line))
    {
        mod_line = replace_strings(line, s1, s2);
        outfile << mod_line << std::endl;
    }
}