/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:24:32 by renstein          #+#    #+#             */
/*   Updated: 2023/08/23 17:24:13 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Poly.hpp"

//______________________________________________________________
Animal::Animal() : _name("")
{
    std::cout << "Created a new object with default constructor"  << std::endl;
}


Animal::Animal(const Animal& copy) : _name(copy._name)
{
    std::cout << "Created a new object named - " << this->_name <<" with copy constructor" << std::endl;
    *this = copy;
}

Animal &Animal::operator=(const Animal& copy)
{
    if (this == &copy)
        return *this;
    this->_name = copy._name;
    std::cout << "Copied Animal " << copy._name <<  " with assignment operator" << std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Destructor called "  << std::endl;
}

//__________________________________________________________________________

Animal::Animal(std::string name)
{
    _name = name;
    std::cout << "Created a new Animal with name \'" << this->_name << "\'" << std::endl;
    return ;
}

void Animal::attack(const std::string& target)
{
    if (_hitpoint == 0)
    {
        std::cout << "Animal " << _name <<  "// is dead and cannot attack!" << std::endl;
    }
    else if  (this->_energy == 0)
	{
		std::cout << "Animal " << this->_name << " has no energy left and cannot attack!" << std::endl;
	}
    else
    {
        _energy--;
        std::cout << "Animal "  << this->_name << " attack " << target << \
        ", causing "<< _damage <<" points of damage"<< "// energypoint =" << _energy << " HP " << _hitpoint << std::endl;
    }
    return ;
}

void Animal::takeDamage(unsigned int amount)
{
    if (_hitpoint <= amount)
        {
            _hitpoint = 0;
             std::cout << "Animal " << _name << " take damage "
			<< amount << ", but current health not enough "  << "// he is dead!" << std::endl;
        }
    else
    {
        _hitpoint -= amount;
        std::cout << "Animal " << _name << " take damage "
                << amount << ", current health " << _hitpoint  << "// energypoint =" << _energy << std::endl;
    }

}

void Animal::beRepaired(unsigned int amount)
{
	if (this->_hitpoint == 0)
	{
		std::cout << "Animal " << this->_name << " is dead and cannot be repaired!" << std::endl;
		return ;
	}
	else if (this->_energy == 0)
	{
		std::cout << "Animal " << this->_name << " has no energy left and cannot be repaired!" << std::endl;
		return ;
	}
    else
    {
        this->_energy--;
        _hitpoint += amount;
        std::cout << "Animal " << this->_name << " recovered " << amount << " hit points!" << ", current health " << _hitpoint  <<std::endl;

    }
	return ;
}
