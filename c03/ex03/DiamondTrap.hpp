/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:48:32 by renstein          #+#    #+#             */
/*   Updated: 2023/08/31 19:02:38 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <string>
#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string _name;


    public:
        DiamondTrap(); //A default constructor that initializes the fixed-point number value to 0.
        DiamondTrap(const DiamondTrap &f); //A copy constructor
        ~DiamondTrap();
        DiamondTrap(std::string name);

        virtual void attack(const std::string& target);
        DiamondTrap& operator=(const DiamondTrap &copy);

		void whoAmI()const;
};

#endif