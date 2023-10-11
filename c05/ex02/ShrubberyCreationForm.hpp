/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:35:07 by renstein          #+#    #+#             */
/*   Updated: 2023/10/11 18:21:40 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

#include <string>
#include <iostream>



class ShrubberyCreationForm : public AForm
{

    private:
        std::string  _target;
        ShrubberyCreationForm(void);

    public:
       ShrubberyCreationForm(std::string target);
       ShrubberyCreationForm(const ShrubberyCreationForm &f);
       ShrubberyCreationForm& operator=(const ShrubberyCreationForm &copy);
        ~ShrubberyCreationForm();

        std::string getTarget(void)const;

        void    execute(Bureaucrat const & executor)const;

        class WriteToFileException : public std::exception
        {
            public:
                const char * what() const throw();
        };


};

std::ostream & operator<<(std::ostream & os,ShrubberyCreationForm const &ShrubberyCreationForma);

#endif