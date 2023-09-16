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

#include "Animal.hpp"

//______________________________________________________________
Animal::Animal()
{
    std::cout << "Animal: Created a new object with default constructor"  << std::endl;
    	_type = "type Animal";
}


Animal::Animal(const Animal& copy) : _type(copy._type)
{
    std::cout << "Animal: Created a new object named - " << this->_type <<" with copy constructor" << std::endl;
    *this = copy;
}

Animal &Animal::operator=(const Animal& copy)
{
    if (this == &copy)
        return *this;
    this->_type = copy._type;
    std::cout << "Copied Animal " << copy._type <<  " with assignment operator" << std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal: destructor called "  << std::endl;
}

//__________________________________________________________________________

Animal::Animal(std::string name)
{
    _type = name;
    std::cout << "Created a new Animal with name \'" << this->_type << "\'" << std::endl;
    return ;
}

std::string Animal::getType(void)const
{
    return(_type);
}

// void Animal::makeSound(void) const
// {
// 	std::cout << "Animal: I dont know who I am...." << std::endl;
// }

