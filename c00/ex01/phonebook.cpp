/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 18:32:58 by renstein          #+#    #+#             */
/*   Updated: 2023/07/12 15:20:26 by renstein         ###   ########.fr       */
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
        std::cout << "Print your First name here: ";
    if (id == 1)
        std::cout << "Last name: ";
    if (id == 2)
        std::cout << "Nickname: ";
    if (id == 3)
        std::cout << "Telephone number (only digits!): ";
    if (id == 4)
        std::cout << "Tell me your secret: ";
}


int	ft_isdigit(std::string str)
{
	for (unsigned long i = 0; i < str.length(); i++)
	{
		if (isdigit(str[i]))
			i++;
		else
			return (0);
	}
	return(1);
}

void	PhoneBook::ft_print()
{

	std::cout << "|" << std::setw(10)  << "Index" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|\n";

	for (int j = 0; j < count; j++)
	{
		std::cout << "|" << std::setw(10) <<  j ;



		if (con[j].getField(0).length() > 9)
				std::cout << "|"  << std::setw(9) << con[j].getField(0).substr(0,9) << ".|";
		else
			std::cout << "|"  << std::setw(10) << con[j].getField(0).substr(0,9) << "|";

		if (con[j].getField(1).length() > 9)
				std::cout << std::setw(9) << con[j].getField(1).substr(0,9) << ".|";
		else
			std::cout << std::setw(10) << con[j].getField(1).substr(0,9) << "|";

		if (con[j].getField(2).length() > 9)
				std::cout << std::setw(9) << con[j].getField(2).substr(0,9) << ".|";
		else
			std::cout << std::setw(10) << con[j].getField(2).substr(0,9) << "|";
		 std::cout << std::endl;
	}

	std::cout << "Print index contact for searching:" << std::endl;

	std::string index;
	std::getline(std::cin, index);

	int n;
	if (!ft_isdigit(index))
	{
		std::cout << "wrong index" << std::endl;
		return ;
	}
	n = atoi(index.c_str());
	if (n >= count)
	{
		std::cout << "wrong index" << std::endl;
		return ;
	}


	for (int j = 0; j <= count; j++)
	{
		if (j == n)
		{
			std::cout  << std::endl;
			std::cout << "Index: " << j << "\n";
			std::cout << "First name: " << con[j].getField(0) << "\n";
			std::cout << "Last name: " <<  con[j].getField(1) << "\n";
			std::cout << "Nickname: " <<  con[j].getField(2) << "\n";
			std::cout << "Telephone: " << con[j].getField(3) << "\n";
			std::cout << "Secret: " << con[j].getField(4) << "\n" ;
			std::cout << std::endl;
		}
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
	if (count == 8)
		count = 0;
}

int main()
{
	PhoneBook pb;
	std::string choisir;

	std::cout << HELLO << std::endl;
	while (std::getline(std::cin, choisir))
	{
		if (choisir == "ADD")
		{
			pb.set_contact();
			std::cout << HELLO << std::endl;
		}
		else if (choisir == "SEARCH")
		{
			pb.ft_print();
			std::cout << HELLO << std::endl;
		}
		else if (choisir == "EXIT")
			return 0;
		else
			std::cout << "Wrong command\n";
	}
	return 0;
}
