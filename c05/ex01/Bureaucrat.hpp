/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:28:32 by renstein          #+#    #+#             */
/*   Updated: 2023/09/24 20:00:17 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"


class Form;


class Bureaucrat
{
    private:
        std::string _name;
        int         _grade;
        Bureaucrat();

    public:
        Bureaucrat(const Bureaucrat &f);
        ~Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat& operator=(const Bureaucrat &copy);

        std::string getName(void)const;
        int         getGrade(void)const;

        void IncremGrade();
        void DecremGrade();



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

std::ostream & operator<<(std::ostream & os, Bureaucrat const & bur);

#endif