/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deniseerjavec <deniseerjavec@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:16 by derjavec          #+#    #+#             */
/*   Updated: 2024/10/18 16:31:55 by deniseerjav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string    replace_strings(std::string line,std::string s1, std::string s2)
{
    std::string mod_line;
    size_t i;
    size_t pos;
    
    pos = 0;
    i = 0;
    while (1)
    {
        pos = line.find(s1, i);
        if (pos == std::string::npos)
            break ;
        mod_line.append(line, i, pos - i);
        mod_line.append(s2);
        i = pos + s1.length();
    }
    mod_line.append(line, i, line.length() - i);
    return (mod_line);
}