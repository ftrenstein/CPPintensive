/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:41:38 by renstein          #+#    #+#             */
/*   Updated: 2023/08/22 20:46:35 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


//______________________________________________________________
ClapTrap::ClapTrap() : _name(""),_hitpoint(10), _energy(10), _damage(0)
{
    std::cout << "Created a new object with default constructor"  << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap& copy) //: _name(copy._name), _hitpoint(copy._hitpoint), _energy(copy._energy), _damage(copy._damage)
{
    std::cout << "Created a new object named - " << _name <<" with copy constructor" << std::endl;
    *this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& copy)
{
    if (this == &copy)
        return *this;
    this->_name = copy._name;
    this->_hitpoint = copy._hitpoint;
    this->_damage = copy._damage;
    this->_energy = copy._energy;
    std::cout << "Copied ClapTrap " << copy._name <<  " with assignment operator" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called "  << std::endl;
}

//__________________________________________________________________________

ClapTrap::ClapTrap(std::string name)
{
    _hitpoint = 10;
    _energy = 10;
    _damage = 0;
    _name = name;
    std::cout << "Created a new ClapTrap with name \'" << this->_name << "\'" << std::endl;
    return ;
}