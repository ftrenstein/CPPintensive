/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:15:45 by renstein          #+#    #+#             */
/*   Updated: 2023/07/16 17:14:11 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>

class Weapon;

class HumanA
{
private:
    std::string _name;
    std::string _type_weap;

    Weapon weaponA;
public:
    HumanA(std::string name, std::string type_weap);
    ~HumanA();

    void    attack();


};

#endif