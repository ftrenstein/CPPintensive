/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 18:52:52 by renstein          #+#    #+#             */
/*   Updated: 2023/07/11 17:32:13 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class PhoneBook;

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nick;
    std::string phone_num;
    std::string darksecret;

public:
    bool setField(std::string name, int id);
    std::string getField(int id);

    Contact();
    ~Contact();
};


#endif
