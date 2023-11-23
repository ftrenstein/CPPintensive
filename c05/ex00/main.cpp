
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:22:21 by renstein          #+#    #+#             */
/*   Updated: 2023/08/22 18:19:10 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main()
{
	std::cout << "---------------test01---------------" << std::endl;

	try
	{
		Bureaucrat a("Cat", 1);
		std::cout << a << std::endl;
		a.DecremGrade();
		std::cout << a << std::endl;
		a.IncremGrade();
		std::cout << a << std::endl;
		a.IncremGrade();
		std::cout << a << std::endl;
		std::cout << "ALL OK" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "---------------test02---------------" << std::endl;


	try
	{
		Bureaucrat a("Dog", -1);
		std::cout << a << std::endl;
		std::cout << "ALL OK" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

		std::cout << "---------------test03---------------" << std::endl;


	try
	{
		Bureaucrat a("Chicken", 150);
		std::cout << a << std::endl;
		a.DecremGrade();
		std::cout << a << std::endl;
		std::cout << "ALL OK" << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	return 0;
}