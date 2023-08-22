/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:28:32 by renstein          #+#    #+#             */
/*   Updated: 2023/08/22 18:47:04 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
private:
    std::string _name;

    unsigned int _hitpoint;
    unsigned int _energy;
    unsigned int _damage;


public:
    ClapTrap(); //A default constructor that initializes the fixed-point number value to 0.
    ClapTrap(const ClapTrap &f); //A copy constructor
    ClapTrap(const int v);
    ClapTrap(const float value);
    ~ClapTrap();
    ClapTrap(std::string name);

    ClapTrap& operator=(const ClapTrap &copy);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif