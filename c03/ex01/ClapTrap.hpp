/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:28:32 by renstein          #+#    #+#             */
/*   Updated: 2023/08/25 01:48:34 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
    protected:
        std::string _name;

        int _hitpoint;
        int _energy;
        int _damage;


    public:
        ClapTrap(); //A default constructor that initializes the fixed-point number value to 0.
        ClapTrap(const ClapTrap &f); //A copy constructor
        ~ClapTrap();
        ClapTrap(std::string name);

        ClapTrap& operator=(const ClapTrap &copy);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
        // void setName(std::string &name);
        // std::string &getName();
    
        
        // void setHitpoints(int hitpoints);
        // int	&getHitpoints();

        
        // void setEnergyPoints(int energy);
        // int	&getEnergyPoints();


		// void	setAttackDamage(int AttackDamage);
        // int		&getAttackDamage();

};

#endif