/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:35:04 by renstein          #+#    #+#             */
/*   Updated: 2023/09/29 15:39:10 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



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

void    Form::beSigned(const Bureaucrat& bur)
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
	os << "Form  <" << forma.getName() << ">, status: "<< (forma.getSigned() ? "Signed" : "Unsigned") << ", because \ngrade for signed  <" << forma.getGradeSign() << ">" " grade for exec form <" << forma.getGradeExec() << ">";
	return (os);
}