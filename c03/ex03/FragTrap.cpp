/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:08:15 by renstein          #+#    #+#             */
/*   Updated: 2023/08/31 18:48:52 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


//______________________________________________________________

FragTrap::FragTrap() : ClapTrap()
{
    this->_hitpoint = 100;
    this->_energy = 100;
    this->_damage = 30;
    std::cout << "Created a new object with FragTrap default constructor"  << std::endl;
}


FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
    std::cout << "Created with FragTrap a new object named - " << _name <<" with copy constructor" << std::endl;
    *this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap& copy)
{
    if (this == &copy)
        return *this;
    this->_name = copy._name;
    this->_hitpoint = copy._hitpoint;
    this->_damage = copy._damage;
    this->_energy = copy._energy;
    std::cout << "Copied FragTrap " << copy._name <<  " with assignment operator" << std::endl;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor FragTrap called for " << this->_name << std::endl;
}
//__________________________________________________________________________

FragTrap::FragTrap(std::string name)  : ClapTrap(name)
{
    this->_hitpoint = 100;
    this->_energy = 100;
    this->_damage = 30;
    // _name = name;
    std::cout << "Created a new FragTrap with name \'" << this->_name << "\'" << std::endl;
    return ;
}



void	FragTrap::attack(const std::string& target)
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
	std::cout << "FragTrap " << this->_name << " attacks! ";
	std::cout << target << " lost " << this->_damage << " hit points!" << std::endl;
	if (this->_energy)
		this->_energy--;
	return ;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << " High fives!" << std::endl;

}