/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:59:21 by renstein          #+#    #+#             */
/*   Updated: 2023/07/17 20:45:03 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"
class Weapon;

class HumanB
{
private:
    std::string _name;
    Weapon *_type_weap;

public:
    HumanB(std::string name);
    ~HumanB();
    void    setWeapon(Weapon &type_weapon);
    void    attack();
};

#endif