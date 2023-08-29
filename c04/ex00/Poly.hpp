/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Poly.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:28:32 by renstein          #+#    #+#             */
/*   Updated: 2023/08/29 15:37:48 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLY_HPP
#define POLY_HPP

#include <string>
#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        ClapTrap(); //A default constructor that initializes the fixed-point number value to 0.
        ClapTrap(const ClapTrap &f); //A copy constructor
        ~ClapTrap();
        ClapTrap(std::string name);

        ClapTrap& operator=(const ClapTrap &copy);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif