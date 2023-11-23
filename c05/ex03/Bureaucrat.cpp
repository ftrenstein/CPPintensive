/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:24:32 by renstein          #+#    #+#             */
/*   Updated: 2023/08/23 17:24:13 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//______________________________________________________________
Bureaucrat::Bureaucrat() {}


Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy._name), _grade(copy._grade)
{}


Bureaucrat &Bureaucrat::operator=(const Bureaucrat& copy)
{
    if (this != &copy)
        this->_grade = copy._grade;
    return *this;
}

Bureaucrat::~Bureaucrat() {}


//__________________________________________________________________________

Bureaucrat::Bureaucrat(std::string name, int range) : _name(name), _grade(range)
{
    if (range > 150)
            throw GradeTooLowException();
    if (range < 1)
            throw GradeTooHighException();
}

std::string Bureaucrat::getName(void)const
{
    return(this->_name);
}

int Bureaucrat::getGrade(void)const
{
    return(this->_grade);
}

const char  * Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("The Grade Bureaucrat is too high!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The Grade Bureaucrat is too low!");
}



void Bureaucrat::IncremGrade()
{
    this->_grade--;
    if(this->_grade < 1)
        throw GradeTooHighException();
}

void Bureaucrat::DecremGrade()
{
    this->_grade++;
    if(this->_grade > 150)
        throw GradeTooHighException();
}


void    Bureaucrat::signForm(AForm &Aform)
{
    try
    {
        Aform.beSigned(*this);
        std::cout << *this << " signed " << Aform << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << *this << " couldn’t sign " << Aform
			<< " because " << e.what() << std::endl;
    }

}

void    Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
        std::cout << *this << " executed " << form
                << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << *this << " couldn't execute " << form
         << " because " << e.what() << '\n';
    }

}

std::ostream& operator<< (std::ostream &os, Bureaucrat const  &bur)
{
	os << "<" << bur.getName() << ">, bureaucrat grade <" << bur.getGrade() << ">";
	return (os);
}