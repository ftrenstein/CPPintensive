/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:28:19 by renstein          #+#    #+#             */
/*   Updated: 2023/09/14 11:16:12 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog: Defoult constructor called" << std::endl;
	_type = "type Dog";
}

Dog::~Dog()
{
	std::cout << "Dog: Denstructor called" << std::endl;
}

Dog::Dog(Dog const &copy) : Animal()
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	this->_type = copy._type;
}

Dog &Dog::operator=(Dog const &copy)
{
	std::cout << "Dog: operator= called" << std::endl;
	if(this == &copy)
		return *this;
	this->_type = copy._type;
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Dog: Gav Gav" << std::endl;
}