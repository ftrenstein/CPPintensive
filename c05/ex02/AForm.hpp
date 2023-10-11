/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:26:30 by renstein          #+#    #+#             */
/*   Updated: 2023/10/11 18:21:30 by renstein         ###   ########.fr       */
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
        const int         _gradeExec;
        // AForm();

    public:
        AForm(const AForm &f);
        ~AForm();
        AForm(std::string name, int gradeSign, int gradeExec);
        AForm& operator=(const AForm &copy);

        std::string getName(void)const;
        int         getGradeSign(void)const;
        virtual int         getGradeExec(void)const = 0;
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

std::ostream & operator<<(std::ostream & os, AForm const & AForma);

#endif