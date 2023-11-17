/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:29:52 by renstein          #+#    #+#             */
/*   Updated: 2023/11/17 18:04:24 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
#include <unistd.h>

class AForm;

class RobotomyRequestForm : public AForm
{
	public:

		RobotomyRequestForm(std::string const & target);
		RobotomyRequestForm(RobotomyRequestForm const & other);
		~RobotomyRequestForm(void);

		RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);

		std::string  getTarget(void) const;

		void execute(Bureaucrat const & executor) const;
	private:

		RobotomyRequestForm(void);
		std::string _target;
};

#endif
