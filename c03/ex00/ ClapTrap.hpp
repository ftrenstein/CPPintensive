/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ClapTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:28:32 by renstein          #+#    #+#             */
/*   Updated: 2023/08/21 17:32:21 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class ClapTrap
{
private:
    int hitpoint;
    int energypoint;
    int damage;
    std::string name;


public:
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};

#endif