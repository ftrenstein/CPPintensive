/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:33:35 by renstein          #+#    #+#             */
/*   Updated: 2023/07/16 13:29:24 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string name = "HI THIS IS BRAIN";
    std::string *stringPTR = &name;
    std::string &stringREF = name;

    std::cout << &name << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl << std::endl;

    std::cout << name << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}