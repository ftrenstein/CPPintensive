/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:04:24 by renstein          #+#    #+#             */
/*   Updated: 2023/11/29 12:49:42 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"

# include <iostream>
#include <list>
#include <vector>

#define SIZE 	15
#define VALUE	15

int main(void)
{
	{
		std::cout << "<----------------LIST TESTING---------------->" << std::endl;
		std::list<int> lst;
		std::list<int>::const_iterator it;

		for (int i = 0; i < SIZE; i++)
			lst.push_back(i + 1);
		std::cout << "List size: " << lst.size() << std::endl;
		try
		{
			it = easyfind(lst, VALUE);
			std::cout << "requested element: " << *it << " was found"<< std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "<---------------VECTOR TESTING--------------->" << std::endl;
		std::vector<int> vct;
		std::vector<int>::const_iterator it;

		for (int i = 0; i < SIZE; i++)
			vct.push_back(i + 1);
		std::cout << "Vector size: " << vct.size() << std::endl;
		try
		{
			it = easyfind(vct, VALUE);
			std::cout << "requested element: " << *it << " was found" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}