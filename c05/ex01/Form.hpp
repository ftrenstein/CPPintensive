/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:26:30 by renstein          #+#    #+#             */
/*   Updated: 2023/09/26 14:54:38 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string  _name;
        bool               _sign;
        const int         _gradeSign;
        const int         _gradeExec;
        // Form();

    public:
        Form(const Form &f);
        ~Form();
        Form(std::string name, int gradeSign, int gradeExec);
        Form& operator=(const Form &copy);

        std::string getName(void)const;
        int         getGradeSign(void)const;
        int         getGradeExec(void)const;
        bool        getSigned()const;
        void        beSigned(const Bureaucrat  &bur);

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

};

std::ostream & operator<<(std::ostream & os, Form const & forma);

#endif