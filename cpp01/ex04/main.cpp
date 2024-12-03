/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <derjavec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/11/06 09:21:26 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char *argv[])
{
    char *filename;
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
    std::string outfile_name((std::string)filename + ".replace");
    std::ofstream outfile(outfile_name.c_str());
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
    return (0);
}