/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:26:53 by renstein          #+#    #+#             */
/*   Updated: 2023/09/24 20:01:35 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//______________________________________________________________
// Form::Form() {}


Form::Form(const Form& copy) : _name(copy._name), _gradeSign(copy._gradeSign), _gradeExec(copy._gradeExec)
{}


Form &Form::operator=(const Form& copy)
{
    if (this != &copy)
        this->_sign = copy.getSigned();
    return *this;
}

Form::~Form() {}


//__________________________________________________________________________

Form::Form(std::string name, int rangeSign, int rangeExec) : _name(name), _sign(false), _gradeSign(rangeSign), _gradeExec(rangeExec)
{
    if (rangeSign > 150 || rangeExec > 150)
            throw GradeTooLowException();
    if (rangeSign < 1 || rangeExec < 1)
            throw GradeTooHighException();
}

std::string Form::getName(void)const
{
    return(this->_name);
}

int Form::getGradeSign(void)const
{
    return(this->_gradeSign);
}

int Form::getGradeExec(void)const
{
    return(this->_gradeExec);
}

const char  * Form::GradeTooHighException::what() const throw()
{
    return ("The Grade Form is too high!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("The Grade Form is too low!");
}

void    Form::beSigned(Bureaucrat& bur)
{
    if (bur.getGrade() <= _gradeSign)
        {
            if (_sign == true)
                throw "The Form already signed!";
            _sign = true;
        }
    else
        throw GradeTooLowException();
}

bool    Form::getSigned()const
{
    return(this->_sign);
}

std::ostream& operator<< (std::ostream &os, Form const  & forma)
{
	os << "< Form " << forma.getName() << ">, status: "<< (forma.getSigned() ? "Signed" : "Unsigned") << " Grade for signed  <" << forma.getGradeSign() << ">" " Grade for exec <" << forma.getGradeExec() << ">";
	return (os);
}