/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 18:32:58 by renstein          #+#    #+#             */
/*   Updated: 2023/07/11 17:51:07 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "phonebook.hpp"
#include "contact.hpp"


PhoneBook::PhoneBook()
{
	count = 0;
}

PhoneBook::~PhoneBook()
{
}

void printprompt(int id)
{
    if (id == 0)
        std::cout << "Print your first name here: ";
    if (id == 1)
        std::cout << "Last name: ";
    if (id == 2)
        std::cout << "Nickname: ";
    if (id == 3)
        std::cout << "telephone number (only digits!): ";
    if (id == 4)
        std::cout << "say your top secret: ";
}

void	PhoneBook::ft_print()
{

	std::cout << " | " << "      Index" << "|";
	std::cout << std::setw(10) << "  First name" << "|";
	std::cout << std::setw(10) << "   Last name" << "|";
	std::cout << std::setw(10) << "   Telephone" << "|\n";

	std::cout << " _____________________________________________________" << std::endl;
	for (int j = 0; j <= count; j++)
	{
		std::cout << " | " << std::setw(10) <<  j << " | " << std::setw(10) << con[j].getField(0).substr(0,9) << " | " << std::setw(10) << con[j].getField(1).substr(0,9) << " | " \
					<< std::setw(10) << con[j].getField(2).substr(0,9) << " | " << std::endl;
	}


	std::cout << "Print index contact for searching:" << std::endl;
//tut stop
	int index;
	if (!getline(std::cin, index))
	{
		std::cout << "wrong index" << std::endl;
	}

	for (int j = 0; j <= count; j++)
	{
		if ( && j == index && index <= count)
		{
			std::cout << " | " << j << " | " << con[j].getField(0) << " | " << con[j].getField(1) << " | " \
						<< con[j].getField(2) << " | " << con[j].getField(3) << " | "<< std::endl;
		}
		else
			break;
	}

}

void PhoneBook::set_contact()
{
	std::string name;

	for (int i = 0; i < 5; i++)
	{
		printprompt(i);
		if (!std::getline(std::cin, name))
			break;
		if(name.empty())
			i--;
		else if (!con[count].setField(name, i))
			i--;
	}
	count++;
	if (count == 9)
		count = 0;
}

int main()
{
	PhoneBook pb;
	std::string choisir;

	std::cout << HALLO << std::endl;
	while (std::getline(std::cin, choisir))
	{
		if (choisir == "ADD")
		{
			pb.set_contact();
			std::cout << HALLO << std::endl;
		}
		else if (choisir == "SEARCH")
		{
			pb.ft_print();
			std::cout << HALLO << std::endl;
		}
		else if (choisir == "EXIT")
			return 0;
		else
			std::cout << "Wrong command\n";
	}
	return 0;
}
