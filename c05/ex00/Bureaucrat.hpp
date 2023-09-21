/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:28:32 by renstein          #+#    #+#             */
/*   Updated: 2023/09/21 19:37:32 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat
{
    protected:
        std::string _name;
        int grade;

    public:
        Bureaucrat();
        Bureaucrat(const Animal &f);
        virtual ~Bureaucrat();
        Bureaucrat(std::string name);

        Bureaucrat& operator=(const Bureaucrat &copy);
        std::string getName(void)const;
        int         getGrade(void)const;

};

#endif