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
Bureaucrat::Bureaucrat()
{
    std::cout << "Created a new object with default constructor"  << std::endl;
    	_type = "type 0";
}


Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
    *this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& copy)
{
    if (this == &copy)
        return *this;
    this->_name = copy._name;
    std::cout << "Copied Bureaucrat " << copy._name <<  " with assignment operator" << std::endl;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
}

//__________________________________________________________________________

Bureaucrat::Bureaucrat(std::string name, int range) : _name(name), _grade(range)
{
    if (range > 150)
            throw Bureaucrat::GradeTooLowException();
    if (range < 1)
            throw Bureaucrat::GradeTooHighException();
}

std::string Bureaucrat::getName(void)const
{
    return(this->_name);
}

int Bureaucrat::getGrade(void)const
{
    return(this->_grade);
}

Bureaucrat::GradeTooHighException()
{

}