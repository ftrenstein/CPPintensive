/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:00:13 by renstein          #+#    #+#             */
/*   Updated: 2023/07/12 12:52:59 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define HELLO "Print ADD or SEARCH or EXIT"
#include <iostream>
#include "contact.hpp"
#include <iomanip>
#include <stdlib.h>

class Contact;

class PhoneBook
{
private:
	Contact  con[8];
	int count;

public:
	void    set_contact();
	void	ft_print();

	PhoneBook();
	~PhoneBook();

};

#endif