/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:00:13 by renstein          #+#    #+#             */
/*   Updated: 2023/07/09 17:16:06 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "contact.hpp"
#include <iomanip>

class Contact;

class PhoneBook
{
    Contact  con[8];
    int count;

    public:
    void    set_contact();
    void	ft_print();

    PhoneBook();

};

#endif