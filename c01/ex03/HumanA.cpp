/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:25:34 by renstein          #+#    #+#             */
/*   Updated: 2023/07/17 20:47:22 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weaponA)
{
    _name = name;
    _weaponA = &weaponA;
}

HumanA::~HumanA()
{
}

void    HumanA::attack()
{
    std::cout << _name << " attacks with their " << _weaponA->getType() << std::endl;
}