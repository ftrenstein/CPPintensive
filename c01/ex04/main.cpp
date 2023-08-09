/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 21:01:57 by renstein          #+#    #+#             */
/*   Updated: 2023/08/09 20:15:51 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "error: expected 3 arguments" << std::endl;
        return 0;
    }

    std::string line;

    size_t pos;
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string out_filename = av[1];
    out_filename += ".replace";
    size_t len1 = s1.length();

    std::ifstream in(av[1]);


    int i;

    if (in.is_open())
    {
        std::ofstream out(out_filename);
        while (getline(in, line))
        {
            i = 0;
            pos = 0;

            while (1)
            {
                pos = line.find(s1, pos);

                if (pos != std::string::npos)
                {
                    out << line.substr(i, pos - i) << s2;
                    i = pos + len1;
                }
                else
                {
                    out << line.substr(i, std::string::npos);
                    break;
                }
                pos = pos + len1;
            }
            out << std::endl;
        }
        out.close();
    }
    else
        std::cerr << "error: can't open file" << std::endl;
    in.close();
    return 0;
}