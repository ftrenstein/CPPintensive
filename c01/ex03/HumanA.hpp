/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:15:45 by renstein          #+#    #+#             */
/*   Updated: 2023/07/17 20:47:16 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class Weapon;

class HumanA
{
private:
    std::string _name;
    Weapon *_weaponA;

public:
    HumanA(std::string name, Weapon &weaponA);
    ~HumanA();

    void    attack();
};

#endif