/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:12:26 by renstein          #+#    #+#             */
/*   Updated: 2023/11/23 17:32:05 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

//______________________________________________________________
Intern::Intern() {}


Intern::Intern(const Intern& copy)
{
    *this = copy;
}


Intern &Intern::operator=(const Intern& copy)
{
    (void)copy;
    return *this;
}

Intern::~Intern() {}






//__________________________________________________________________________

static AForm * shrubberyCreateForm(std::string const & target)
{
	return (new ShrubberyCreationForm(target));
}

static AForm * robotomyCreatetForm(std::string const & target)
{
	return (new RobotomyRequestForm(target));
}

static AForm * pardonCreateForm(std::string const & target)
{
	return (new PresidentialPardonForm(target));
}

const char  * Intern::NameNotExistExeption::what() const throw()
{
    return ("The name doesn't exist!");
}


AForm * Intern::makeForm(std::string const formName, std::string const target)
{
    AForm * (* funcArr[3])(std::string const &target) =
    {
        shrubberyCreateForm,
        robotomyCreatetForm,
        pardonCreateForm
    };
    std::string formNames[3] =
	{
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	AForm * ret = NULL;
    try
	{
		for (int i = 0; i < 3; i++)
		{
			if (formName == formNames[i])
				ret = funcArr[i](target);
		}
		if (ret)
			std::cout << "Intern creates " << *ret << std::endl;
		else
			throw NameNotExistExeption();
	}
	catch(const std::exception & e)
	{
		std::cerr << "Exception caught: " << e.what() << '\n';
	}
	return ret;
}






