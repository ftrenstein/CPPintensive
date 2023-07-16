/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:07:41 by renstein          #+#    #+#             */
/*   Updated: 2023/07/16 16:50:59 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>


class HumanA;
class HumanB;

class Weapon
{
private:
    std::string _name;
    std::string _type_weap;

public:
    Weapon(std::string type_weap);
    ~Weapon();

    char*    Weapon::getType();
    void    Weapon::setType(std::string name);




    void announce(void);
    void SetName(std::string name);
};

#endif