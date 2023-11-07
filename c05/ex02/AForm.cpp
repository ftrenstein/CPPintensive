/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:26:53 by renstein          #+#    #+#             */
/*   Updated: 2023/09/29 15:35:44 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

//______________________________________________________________
// AForm::AForm() {}


AForm::AForm(const AForm& copy) : _name(copy._name), _gradeSign(copy._gradeSign), _gradeToExecute(copy._gradeToExecute)
{}


AForm &AForm::operator=(const AForm& copy)
{
    if (this != &copy)
        this->_sign = copy.getSigned();
    return *this;
}

AForm::~AForm() {}


//__________________________________________________________________________

AForm::AForm(std::string name, int rangeSign, int rangeExec) : _name(name), _sign(false), _gradeSign(rangeSign), _gradeExec(rangeExec)
{
    if (rangeSign > 150 || rangeExec > 150)
            throw GradeTooLowException();
    if (rangeSign < 1 || rangeExec < 1)
            throw GradeTooHighException();
}

std::string AForm::getName(void)const
{
    return(this->_name);
}

int AForm::getGradeSign(void)const
{
    return(this->_gradeSign);
}

int AForm::getGradeExec(void)const
{
    return(this->_gradeToExecute);
}

const char  * AForm::GradeTooHighException::what() const throw()
{
    return ("The Grade AForm is too high!");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("The Grade AForm is too low!");
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return ("The AForm  not signed at all!");
}

void    AForm::beSigned(const Bureaucrat& bur)
{
    if (bur.getGrade() <= _gradeSign)
        {
            if (_sign == true)
                throw "The AForm already signed!";
            _sign = true;
        }
    else
        throw GradeTooLowException();
}

bool    AForm::getSigned()const
{
    return(this->_sign);
}


void AForm::checkRequirementsToExecute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw FormNotSignedException();
	else if (executor.getGrade() > this->_gradeToExecute)
		throw GradeTooLowException();
}

std::ostream& operator<< (std::ostream &os, AForm const  & AForma)
{
	os << "AForm  <" << AForma.getName() << ">, status: "<< (AForma.getSigned() ? "Signed" : "Unsigned") << ", because \ngrade for signed  <" << AForma.getGradeSign() << ">" " grade for exec AForm <" << AForma.getGradeExec() << ">";
	return (os);
}