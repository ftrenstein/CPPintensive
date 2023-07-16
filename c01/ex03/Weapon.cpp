/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:58:53 by renstein          #+#    #+#             */
/*   Updated: 2023/07/16 16:24:16 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string type_weap)
{
    _type_weap = type_weap;
}

Weapon::~Weapon()
{
}

void    Weapon::setType(std::string name)
{
    _type_weap = name;
}

char*     Weapon::getType()
{
    return(_type_weap);
}

