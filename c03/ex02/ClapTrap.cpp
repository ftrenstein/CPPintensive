/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:24:32 by renstein          #+#    #+#             */
/*   Updated: 2023/08/24 23:38:08 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


//______________________________________________________________
ClapTrap::ClapTrap() : _name("empty"),_hitpoint(10), _energy(10), _damage(0)
{
    std::cout << "Created a new ClapTrap object " << this->_name << " with default constructor"  << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap& copy) : _name(copy._name), _hitpoint(copy._hitpoint), _energy(copy._energy), _damage(copy._damage)
{
    std::cout << "Created a new object named - " << this->_name <<" with ClapTrap copy constructor" << std::endl;
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
    std::cout << "Destructor ClapTrap called for  " << _name << std::endl;
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

void ClapTrap::attack(const std::string& target)
{
    if (_hitpoint == 0)
    {
        std::cout << "ClapTrap " << _name <<  "// is dead and cannot attack!" << std::endl;
    }
    else if  (this->_energy == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy left and cannot attack!" << std::endl;
	}
    else
    {
        _energy--;
        std::cout << "ClapTrap "  << this->_name << " attack " << target << \
        ", causing "<< _damage <<" points of damage"<< "// energypoint =" << _energy << " HP " << _hitpoint << std::endl;
    }
    return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitpoint <= amount)
        {
            _hitpoint = 0;
             std::cout << "ClapTrap " << _name << " take damage "
			<< amount << ", but current health not enough "  << "// he is dead!" << std::endl;
        }
    else
    {
        _hitpoint -= amount;
        std::cout << "ClapTrap " << _name << " take damage "
                << amount << ", current health " << _hitpoint  << "// energypoint =" << _energy << std::endl;
    }

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitpoint == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead and cannot be repaired!" << std::endl;
		return ;
	}
	else if (this->_energy == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy left and cannot be repaired!" << std::endl;
		return ;
	}
    else
    {
        this->_energy--;
        _hitpoint += amount;
        std::cout << "ClapTrap " << this->_name << " recovered " << amount << " hit points!" << ", current health " << _hitpoint  <<std::endl;

    }
	return ;
}
