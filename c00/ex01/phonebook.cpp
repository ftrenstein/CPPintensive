/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 18:32:58 by renstein          #+#    #+#             */
/*   Updated: 2023/07/08 20:36:28 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "phonebook.hpp"
#include "contact.hpp"

void printprompt(int id)
{
    if (id == 0)
        std::cout << "Hello, my dear friend! Print your first name here:" << std::endl;
    if (id == 1)
        std::cout << "Last name:" << std::endl;
    if (id == 2)
        std::cout << "Nickname:" << std::endl;
    if (id == 3)
        std::cout << "telephone number (only digits!):" << std::endl;
    if (id == 4)
        std::cout << "say your top secret:" << std::endl;
}

// void	PhoneBook::ft_print()
// {

// }

int main()
{
	std::string name;
	PhoneBook pb;
	std::string choisir;
	std ::cin >> choisir;

	if (choisir == "ADD")
	{
		for (int a = 0; a < 8; a++)
		{
			for (int i = 0; i < 5; i++)
			{
				printprompt(i);
				std::cin >> name;
				if (!pb.con[a].setField(name, i))
					i--;

			}
		}
	}
	else if (choisir == "SEARCH")
	{

		std::cout << " ---------------------------------------------------------" << std::endl;
		for (int j = 0; j < 2; j++)
		{
			std::cout << " | " << j << " | " << pb.con[j].getField(0) << " | " << pb.con[j].getField(1) << " | " \
						<< pb.con[j].getField(2) << " | " << pb.con[j].getField(3) << " | "<< std::endl;
		}
		std::cout << " ---------------------------------------------------------" << std::endl;
	}
	else if (choisir == "EXIT")
		exit(0);
	else
		return(0);


	// std::cin >>  pb.con[0].first_name;
	// std::cout << pb.con[0].first_name;
}
