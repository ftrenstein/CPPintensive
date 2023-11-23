/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:29:42 by renstein          #+#    #+#             */
/*   Updated: 2023/11/17 17:42:35 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"



// PresidentialPardonForm::PresidentialPardonForm(void) {}


PresidentialPardonForm::PresidentialPardonForm(std::string const & target)
    :   AForm(target, 25, 5), _target(target) {}


PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & other)
    : AForm(other), _target(other.getTarget()) {}

PresidentialPardonForm::~PresidentialPardonForm(void) {}


PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	AForm::operator=(rhs);
	if (this != &rhs)
		this->_target = rhs.getTarget();
	return *this;
}

//__________________________________________________________________________


std::string PresidentialPardonForm::getTarget(void)const
{
    return(this->_target);
}



void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	checkRequirementsToExecute(executor);
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
