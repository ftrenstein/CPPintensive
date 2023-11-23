/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:12:51 by renstein          #+#    #+#             */
/*   Updated: 2023/11/23 17:21:51 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(Intern const & other);
		~Intern(void);

		Intern & operator=(Intern const & rhs);
		class NameNotExistExeption : public std::exception
		{
			public:
				const char *what() const throw();
		};

		AForm * makeForm(std::string const formName, std::string const target);
};

#endif