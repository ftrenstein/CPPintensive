/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:59:21 by renstein          #+#    #+#             */
/*   Updated: 2023/07/16 17:18:18 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>

class Weapon;

class HumanB
{
private:
    std::string _name;
    std::string _type_weap;


public:
    HumanB(std::string name);
    ~HumanB();

    void    HumanB::attack();

};

#endif