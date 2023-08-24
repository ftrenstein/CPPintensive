/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:41:38 by renstein          #+#    #+#             */
/*   Updated: 2023/08/25 01:49:30 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


//______________________________________________________________

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "Created a new object with ScavTrap default constructor"  << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
    std::cout << "Created with ScavTrap a new object named - " << _name <<" with copy constructor" << std::endl;
    *this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& copy)
{
    if (this == &copy)
        return *this;
    this->_name = copy._name;
    this->_hitpoint = copy._hitpoint;
    this->_damage = copy._damage;
    this->_energy = copy._energy;
    std::cout << "Copied ScavTrap " << copy._name <<  " with assignment operator" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor ScavTrap called for " << this->_name << std::endl;
}
//__________________________________________________________________________

ScavTrap::ScavTrap(std::string name)  : ClapTrap(name)
{
    _hitpoint = 100;
    _energy = 50;
    _damage = 20;

    std::cout << "Created a new ScavTrap with name \'" << this->_name << "\'" << std::endl;
    return ;
}

void ScavTrap::guardGate()
{
    if (this->_hitpoint == 0)
	{
		std::cout << "ScavTrap " << this->_name << " is dead and cannot enter Gate keeper mode!" << std::endl;
		return ;
	}
	if (this->_energy == 0)
	{
		std::cout << "ScavTrap " << this->_name << " has no energy left and cannot enter Gate keeper mode!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode!" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_hitpoint == 0)
	{
		std::cout << this->_name << " is dead and cannot attack!" << std::endl;
		return ;
	}
	if (this->_energy == 0)
	{
		std::cout << this->_name << " has no energy left and cannot attack!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks! ";
	std::cout << target << " lost " << this->_damage << " hit points!" << std::endl;
	if (this->_energy)
		this->_energy--;
	return ;
}