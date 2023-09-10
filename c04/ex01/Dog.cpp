/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:28:19 by renstein          #+#    #+#             */
/*   Updated: 2023/09/10 12:48:20 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog: Defoult constructor called" << std::endl;
	_type = "type Dog";
	_brain = new Brain();
}

Dog::~Dog()
{
	// if (_brain != nullptr)
		delete _brain;
	std::cout << "Dog: Denstructor called" << std::endl;
}

Dog::Dog(Dog const &copy)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	this->_brain = new Brain(*copy._brain);
	this->_type = copy._type;
}

Dog &Dog::operator=(Dog const &copy)
{
	std::cout << "Dog: operator= called" << std::endl;
	if(this == &copy)
		return *this;
	this->_type = copy._type;
	// if(_brain != nullptr)
		delete _brain;
	this->_brain = new Brain(*copy._brain);
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Dog: Gav Gav" << std::endl;
}