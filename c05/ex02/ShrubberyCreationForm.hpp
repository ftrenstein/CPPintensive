/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:35:07 by renstein          #+#    #+#             */
/*   Updated: 2023/11/07 11:43:37 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
class AForm;

class ShrubberyCreationForm : public AForm
{
    public:
       ShrubberyCreationForm(std::string const & target);
       ShrubberyCreationForm(const ShrubberyCreationForm &other);
        ~ShrubberyCreationForm();

       ShrubberyCreationForm& operator=(const ShrubberyCreationForm &copy);

        std::string getTarget(void)const;


        class WriteToFileException : public std::exception
        {
            public:
                const char * what() const throw();
        };

        void    execute(Bureaucrat const & executor)const;
    private:

        ShrubberyCreationForm(void);
        std::string  _target;
};

#endif