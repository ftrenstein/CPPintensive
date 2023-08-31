/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:47:23 by renstein          #+#    #+#             */
/*   Updated: 2023/08/31 19:03:48 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap default constructor called for " << this->_name << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
    this->_name =  copy._name;
    this->_hitpoint = copy._hitpoint;
    this->_energy = copy._energy;
    this->_damage = copy._damage;
    std::cout << "DiamondTrap copy constructor called for " << this->_name << std::endl;
}
DiamondTrap::DiamondTrap(std::string name)
{
    ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hitpoint = FragTrap::_hitpoint;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
    std::cout << "Created a new DiamondTrap with name \'" << this->_name << "\'" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &rhs)
{
	this->_name = rhs._name;
	this->_hitpoint = rhs._hitpoint;
	this->_energy = rhs._energy;
	this->_damage = rhs._damage;
	std::cout << "Copied DiamondTrap " << rhs._name <<  " with assignment operator" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called for " << this->_name << std::endl;
	return ;
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "I am " << this->_name << "! My ClapTrap name is " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
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
	std::cout << "DiamondTrap " << this->_name << " attacks! ";
	std::cout << target << " lost " << this->_damage << " hit points!" << std::endl;
	if (this->_energy)
		this->_energy--;
	return ;
}