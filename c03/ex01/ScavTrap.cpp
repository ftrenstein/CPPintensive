/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:41:38 by renstein          #+#    #+#             */
/*   Updated: 2023/08/23 17:59:35 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


//______________________________________________________________
ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "Created a new object with ScavTrap default constructor"  << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap& copy) //: _name(copy._name), _hitpoint(copy._hitpoint), _energy(copy._energy), _damage(copy._damage)
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

ScavTrap::ScavTrap(std::string name)
{
    _hitpoint = 10;
    _energy = 10;
    _damage = 0;
    _name = name;
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