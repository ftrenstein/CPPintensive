/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:25:23 by renstein          #+#    #+#             */
/*   Updated: 2023/07/17 20:43:40 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    _name = name;
}

HumanB::~HumanB()
{
}

void    HumanB::setWeapon(Weapon &type_weapon)
{
    _type_weap = &type_weapon;
}

void    HumanB::attack()
{
    std::cout << _name << " attacks with their " << _type_weap->getType() << std::endl;
}