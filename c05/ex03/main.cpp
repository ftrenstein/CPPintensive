
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
#include "Intern.hpp"


# define GRADE 46

int main(void)
{
	Bureaucrat * bobby = new Bureaucrat("Bobby", GRADE);
	Intern randomInterm;
	AForm *new_form = NULL;
	{
		std::cout << "---------------test01---------------" << std::endl;

		new_form = randomInterm.makeForm("shrubbery creation", "plant");
		if (new_form)
		{
			bobby->signForm(*new_form);
			bobby->executeForm(*new_form);
			delete new_form;
		}
	}
	{
		std::cout << "---------------test02---------------" << std::endl;

		new_form = randomInterm.makeForm("robotomy request", "printer");
		if (new_form)
		{
			bobby->signForm(*new_form);
			bobby->executeForm(*new_form);
			delete new_form;
		}
	}
	{
		std::cout << "---------------test03---------------" << std::endl;

		new_form = randomInterm.makeForm("presidential pardon", "Alex");
		if (new_form)
		{
			bobby->signForm(*new_form);
			bobby->executeForm(*new_form);
			delete new_form;
		}
	}
	{
		std::cout << "---------------test04---------------" << std::endl;

		new_form = randomInterm.makeForm("invalid form", "target");
		if (new_form)
		{
			bobby->executeForm(*new_form);
			bobby->signForm(*new_form);
			delete new_form;
		}
	}
	delete bobby;
	return (0);
}
