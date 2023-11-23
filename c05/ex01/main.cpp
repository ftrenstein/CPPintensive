
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
	Form * form = new Form("420", 130, 30);
	std::cout << *form << std::endl;
	{
		std::cout << "---------------test01---------------" << std::endl;
		try
		{
			Bureaucrat * bob = new Bureaucrat("Dog", 131);
			Form *new_form = form;
			bob->signForm(*new_form);
			delete bob;
		}
		catch (std::exception const & e)
		{
			std::cerr << "Caught exception: " << e.what() << std::endl;
		}
	}
		{
		std::cout << "---------------test02---------------" << std::endl;
		try
		{
			Bureaucrat * josh = new Bureaucrat("Cat", 129);
			Form *new_form = form;
			josh->signForm(*new_form);
			delete josh;
		}
		catch (std::exception const & e)
		{
			std::cerr << "Caught exception: " << e.what() << std::endl;
		}
	}
	delete form;
	{
		std::cout << "---------------test03---------------" << std::endl;
		try
		{
			Form * f = new Form("F-222a", 300, 10);
			delete f;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Caught exception: " << e.what() << std::endl;
		}
	}
	{
		std::cout << "---------------test04---------------" << std::endl;
		try
		{
			Form * f = new Form("F-222a", 0, -100);
			delete f;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Caught exception: " << e.what() << std::endl;
		}
	}

	return 0;
}