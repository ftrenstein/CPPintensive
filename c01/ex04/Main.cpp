/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 21:01:57 by renstein          #+#    #+#             */
/*   Updated: 2023/08/05 13:25:41 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        std::ofstream loser;
        loser.open(argv[1]);
        if (!loser.is_open())
            std::cout << "error opening file" << std::endl;
        else
            loser << "copy";
        loser.close();
    }
    
    else
         std::cout << "wrong namber argv" << std::endl;;
    return (0);

}