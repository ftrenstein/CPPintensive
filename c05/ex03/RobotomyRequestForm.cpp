/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:29:49 by renstein          #+#    #+#             */
/*   Updated: 2023/11/17 18:03:21 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

// RobotomyRequestForm::RobotomyRequestForm(void) {}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target)
	:	AForm(target, 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & other)
	:	AForm(other), _target(other.getTarget()) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	AForm::operator=(rhs);
	if (this != &rhs)
		this->_target = rhs.getTarget();
	return *this;
}

std::string  RobotomyRequestForm::getTarget(void) const
{
	return this->_target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	checkRequirementsToExecute(executor);
	std::string sounds[4] =
	{
		"Brrr...",
		"...Drrr..",
		"..Zz...zZz..zz...zzz..",
		"...Wzzzzzzzzz"
	};
	for (int i = 0; i < 4; i++)
	{
		sleep(i);
		std::cout << sounds[i] << std::endl;
	}
	srand(time(NULL));
	if (rand() % 2 == 1)
		std::cout << this->_target << " has been robotimized successfully by " << executor << std::endl;
	else
		std::cout << "Target: " << this->_target << ". Robotomy failed." << std::endl;
}
