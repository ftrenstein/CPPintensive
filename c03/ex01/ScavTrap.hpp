/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:20:55 by renstein          #+#    #+#             */
/*   Updated: 2023/08/25 01:28:15 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(); //A default constructor that initializes the fixed-point number value to 0.
        ScavTrap(const ScavTrap &f); //A copy constructor
        ~ScavTrap();
        ScavTrap(std::string name);

        ScavTrap& operator=(const ScavTrap &copy);

        void attack(const std::string& target);
        void guardGate();
};

#endif