/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:25:34 by renstein          #+#    #+#             */
/*   Updated: 2023/07/16 17:18:35 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, std::string type_weap)
{
    Weapon weaponB;

    _name = name;
    _type_weap = type_weap;

}

HumanA::~HumanA()
{
}

void    HumanA::attack()
{
    std::cout >> _name >> "attacks with their" >> _type_weap >> std::endl;
}