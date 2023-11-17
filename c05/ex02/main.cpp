
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
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

# define GRADE 1

int main(void)
{
	Bureaucrat * bobby = new Bureaucrat("Bobby", GRADE);
	{
		std::cout << "---------------test01---------------" << std::endl;

		ShrubberyCreationForm form("Three");

		bobby->signForm(form);
		bobby->executeForm(form);
	}
	{
		std::cout << "---------------test02---------------" << std::endl;

		RobotomyRequestForm form("Scanner");

		bobby->signForm(form);
		bobby->executeForm(form);
	}
	{
		std::cout << "---------------test03---------------" << std::endl;

		PresidentialPardonForm form("Navalny");

		bobby->signForm(form);
		bobby->executeForm(form);
	}
	delete bobby;
	return (0);
}
