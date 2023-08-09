/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:33:35 by renstein          #+#    #+#             */
/*   Updated: 2023/08/09 20:10:11 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string name = "HI THIS IS BRAIN";
    std::string *stringPTR = &name;
    std::string &stringREF = name;

	std::cout << "Address of string:\t\t" << &name << std::endl
            << "Address held by stringPTR:\t" << stringPTR << std::endl
            << "Address held by stringREF:\t" << &stringREF << std::endl
            << std::endl
            << "Value of string:\t\t" << name << std::endl
            << "Value pointed to by stringPTR:\t" << *stringPTR << std::endl
            << "Value pointed to by stringREF:\t" << stringREF << std::endl;
}