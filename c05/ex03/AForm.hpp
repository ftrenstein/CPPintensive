/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:26:30 by renstein          #+#    #+#             */
/*   Updated: 2023/11/23 17:36:10 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string  _name;
        bool               _sign;
        const int         _gradeSign;
        const int         _gradeToExecute;
        // AForm();

    public:
        AForm(const AForm &f);
        virtual ~AForm();
        AForm(std::string name, int gradeSign, int gradeExec);
        AForm& operator=(const AForm &copy);

        std::string getName(void)const;
        int         getGradeSign(void)const;
        int         getGradeExec(void)const;
        bool        getSigned()const;
        void        beSigned(const Bureaucrat  &bur);

		virtual void execute(Bureaucrat const & executor) const = 0;

        void    checkRequirementsToExecute(const Bureaucrat& executor)const;

        class GradeTooHighException : public std::exception
        {
            public:
                const char * what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char * what() const throw();
        };

        class GradeBurTooLowException :public std::exception
        {
            public:
                const char * what() const throw();
        };
        class FormNotSignedException : public std::exception
        {
            public:
                const char * what() const throw();
        };
};

std::ostream & operator<<(std::ostream & os, AForm const & AForma);

#endif