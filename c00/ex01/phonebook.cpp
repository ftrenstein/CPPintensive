/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 18:32:58 by renstein          #+#    #+#             */
/*   Updated: 2023/07/09 18:10:28 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "phonebook.hpp"
#include "contact.hpp"


PhoneBook::PhoneBook()
{
	count = 0;
}

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

void	PhoneBook::ft_print()
{
	int index = 0;
	std::cout << " | " << "      Index" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << " Last name" << "|";
	std::cout << std::setw(10) << " Telephone" << "|\n";

	std::cout << " --------------------------------------------------------------" << std::endl;
	for (int j = 0; j <= (count - 1); j++)
	{
		std::cout << " | " << std::setw(10) <<  j << " | " << std::setw(10) << con[j].getField(0).substr(0,9) << " | " << std::setw(10) << con[j].getField(1).substr(0,9) << " | " \
					<< std::setw(10) << con[j].getField(2).substr(0,9) << " | " << std::setw(10) << con[j].getField(3).substr(0,9) << " | "<< std::endl;
	}
	std::cout << " --------------------------------------------------------------" << std::endl;
	std::cout << "Print index contact for searching:" << std::endl;
	std::cin >> index;
	for (int j = 0; j <= (count - 1); j++)
	{
		if (j == index)
		{
			std::cout << " | " << j << " | " << con[j].getField(0) << " | " << con[j].getField(1) << " | " \
						<< con[j].getField(2) << " | " << con[j].getField(3) << " | "<< std::endl;
		}
	}

}


void PhoneBook::set_contact()
{
	std::string name;
	for (int i = 0; i < 5; i++)
	{
		printprompt(i);
		std::cin >> name;
		if (!con[count].setField(name, i))
			i--;
	}
	count++;
	if (count > 8)
		count = 0;
}

int main()
{
	PhoneBook pb;

	std::cout << "print ADD or SEARCH or EXIT" << std::endl;

	std::string choisir;
	while (1)
	{
		std ::cin >> choisir;
		if (choisir == "ADD")
		{
			pb.set_contact();
		}
		else if (choisir == "SEARCH")
		{
			pb.ft_print();
		}
		else if (choisir == "EXIT")
			exit(0);
		// else
		// 	return(0);
	}
}
